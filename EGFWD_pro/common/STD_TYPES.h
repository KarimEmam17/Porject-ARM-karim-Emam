/*
 * STD_TYPES.h
 *
 * Created: 2/20/2022 10:45:47 PM
 *  Author: K.EMAM
 */ 


#ifndef STD_TYPES_H_
#define STD_TYPES_H_
/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
/* NULL_PTR define with a void pointer to zero definition*/
#define NULL_PTR       ((void *)0)

/* INLINE  define for abstraction of the keyword inline*/
#define INLINE         inline

/* LOCAL_INLINE define for abstraction of the keyword inline in functions with "static" scope.
   Different compilers may require a different sequence of the keywords "static" and "inline" 
   if this is supported at all. */
#define LOCAL_INLINE   static inline


typedef unsigned char			u8;
typedef signed char			    s8;

typedef unsigned short int     u16;
typedef signed short int       s16;

typedef unsigned  int		   u32;
typedef signed  int			   s32;

typedef float				   f32;
typedef double                 f64;

typedef enum 
{
	STD_low =  0,
	STD_high = 1,
	STD_error
}STD_LevelType;


typedef enum 
{
	STD_off = 0,
	STD_on =  1
}STD_BoolType;



typedef enum 
{
	STD_suspended = 0,
	STD_active =    1
}STD_StatusType;


typedef enum 
{
	False = 0,
	True = 1
}boolean;


typedef enum 
{
	STD_disable = 0,
	STD_enable=   1
}STD_EnType;


typedef enum 
{
	E_OK    =0,
	E_NOT_OK=1
}STD_ReturnType;


typedef void(*ptr2func)(void);






#endif /* STD_TYPES_H_ */