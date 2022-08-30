#ifndef PORT_CONFIG_H
#define PORT_CONFIG_H


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef enum
{
		PA0=0,
		PA1,
		PA2,
		PA3,
		PA4,
		PA5,
		PA6,
		PA7,
		
		PB0,
		PB1,
		PB2,
		PB3,
		PB4,
		PB5,
		PB6,
		PB7,
		
		PC0,
		PC1,
		PC2,
		PC3,
		PC4,
		PC5,
		PC6,
		PC7,
		
		PD0,
		PD1,
		PD2,
		PD3,
		PD4,
		PD5,
		PD6,
        PD7,
		
		PE0,
		PE1,
		PE2,
		PE3,
		PE4,
		PE5,
		
		PF0,
		PF1,
		PF2,
		PF3,
		PF4,
		

}enum_port_pin_num; 

typedef enum
{
	portA=0,
	portB,
	portC,
	portD,
	portE,
	portF
	
}enum_Port;

typedef enum
{
    pin_input=0,
    pin_output,
}enum_PinDir;


typedef enum
{
    pin_Mode_DIO,
    pin_Mode_UART_Tx,
    pin_Mode_UART_Rx,
    pin_Mode_SSI_Clk,
    pin_Mode_SSI_Fss,
    pin_Mode_SSI_Rx,
    pin_Mode_SSI_Tx,
    pin_Mode_I2C_Scl,
    pin_Mode_I2C_Sda,
    pin_Mode_PWM,
    pin_Mode_CCP,
    pin_Mode_AIN,
    pin_Mode_CAN_Rx,
    pin_Mode_CAN_Tx
	
}enum_Port_pin_mode;

typedef enum
{
    Port_IntDisable=0,
    Port_IntFallingEdge,
    Port_IntRisingEdge,
    Port_IntBothEdges
	
}enum_Port_IntType;

typedef enum
{
    pin_locked,
    pin_unlocked
}enum_Port_Pinstatus;

typedef enum
{
    Port_InternalAttach_NA,
    Port_InternalAttach_PullUpRes,
    Port_InternalAttach_PullDownRes,
    Port_InternalAttach_OpenDrain

}enum_Port_PinInternalAttach;

typedef enum
{
    Port_CurrDrive_2mA,
    Port_CurrDrive_4mA,
    Port_CurrDrive_8mA
}enum_Port_pin_OutputCurrent;

typedef struct
{
    enum_port_pin_num    		    pin;
    enum_PinDir				        Dir;
    enum_Port_pin_mode           	Mode;
    enum_Port_IntType            	Interrupt;
    enum_Port_PinInternalAttach 	AttachedRes;
    enum_Port_pin_OutputCurrent     CurrentDrive;
    enum_Port_Pinstatus         	LockStatus;
	
}Port_Config;


#endif