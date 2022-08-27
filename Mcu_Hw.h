#ifndef MCU_HW_H
#define MCU_HW_H
#include "STD_TYPES.h"
#include "BIT_MATH.h"



// global  constant macros 
#define  Cortexm4_Peri_Base_Address     0xE000.E000
#define APINT							*((volatile u32*)(Cortexm4_Peri_Base_Address+0xD0C))
#define INTCTRL							*((volatile u32*)(Cortexm4_Peri_Base_Address+0xD04))















#endif