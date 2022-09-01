#include "SysTick.h"
#include "Bit_Math.h"
#include "Mcu_Hw.h"
#include "STD_Types.h"


/**********************************************************************************************************************/
/*  Constant Macros for STCTRL register*/
/*********************************************************************************************************************/
#define ENABLE		0
#define INTEN			1
#define CLK_SRC		2
/**********************************************************************************************************************/
/*  LOCAL FUNCTION PROTOTYPES*/
/*********************************************************************************************************************/
static uint32 SYSTICK_SetRegTimeValue(uint32 time_ms);

/**********************************************************************************************************************/
/*  LOCAL FUNCTIONS*/
/*********************************************************************************************************************/
 static uint32 SYSTICK_SetRegTimeValue(uint32 time_ms)
 {
	 /*if frequency is F_CPU = 16MHZ*/
	 uint32 result;
	 result = (time_ms*1000000)/(uint32)62.5;
	 return result-1;
 }
/**********************************************************************************************************************/
/*  GLOBAL FUNCTIONS*/
/*********************************************************************************************************************/
void SysTick_Init(uint32 time_ms)
{
/*Disable Timer */
/*******************************/
	ClrBit(STCTRL, ENABLE);
	
/*Select System clock */
/*******************************/
	SetBit(STCTRL,CLK_SRC);
	
/*Load timer start value */
/*******************************/
	STRELOAD = SYSTICK_SetRegTimeValue(time_ms);
	
/*Set current register to zero */
/*******************************/
	STCURRENT = 0;
	
/*Enable Interrupt */
/*******************************/
	SetBit(STCTRL, INTEN);
	
/*Enable Timer */
/*******************************/
	SetBit(STCTRL, ENABLE);
	
	
/*Enable Global Interrupt */
/*******************************/
__enable_irq();
	
}