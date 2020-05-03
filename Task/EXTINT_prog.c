#include "utils.h"
#include "EXTINT_int.h"
#include "EXTINT_priv.h"
#include "EXTINT_config.h"
#include "std_types.h"

void(*INT0Ptr) (void)='\0' ;
void(*INT1Ptr) (void)='\0' ;
void(*INT2Ptr) (void)='\0' ;

void __vector_1 (void) __attribute__ ((signal,used, externally_visible));
void __vector_2 (void) __attribute__ ((signal,used, externally_visible));
void __vector_3 (void) __attribute__ ((signal,used, externally_visible));
void  EXTINT_voidInit(void)
{

	SET_BIT(GIFR,INTF2);
	SET_BIT(GIFR,INTF1);
	SET_BIT(GIFR,INTF0);
/********************The Logical change *********************/
#if (EXTINT_INT0_TYPE == LOW_LEVEL)
	CLR_BIT(MCUCR,ISC01);
	CLR_BIT(MCUCR,ISC00);
#elif (EXTINT_INT0_TYPE == LOGICAL_CHANGE)
	CLR_BIT(MCUCR,ISC01);
	SET_BIT(MCUCR,ISC00);
#elif (EXTINT_INT0_TYPE == FALLING_EDGE)
	SET_BIT(MCUCR,ISC01);
	CLR_BIT(MCUCR,ISC00);
#elif (EXTINT_INT0_TYPE == RISING_EDGE)
	SET_BIT(MCUCR,ISC01);
	SET_BIT(MCUCR,ISC00);
#endif

#if (EXTINT_INT1_TYPE == LOW_LEVEL)
	CLR_BIT(MCUCR,ISC11);
	CLR_BIT(MCUCR,ISC10);
#elif (EXTINT_INT1_TYPE == LOGICAL_CHANGE)
	CLR_BIT(MCUCR,ISC11);
	SET_BIT(MCUCR,ISC10);
#elif (EXTINT_INT1_TYPE == FALLING_EDGE)
	SET_BIT(MCUCR,ISC11);
	CLR_BIT(MCUCR,ISC10);
#elif (EXTINT_INT1_TYPE == RISING_EDGE)
	SET_BIT(MCUCR,ISC11);
	SET_BIT(MCUCR,ISC10);
#endif

#if (EXTINT_INT2_TYPE == FALLING_EDGE)
	CLR_BIT(MCUCSR,ISC2);
#elif (EXTINT_INT2_TYPE == RISING_EDGE)
	SET_BIT(MCUCSR,ISC2);
#endif
/*******************************Enable***************************/
#if (EXTINT_INT2_ENABLE	== DISABLE)
	CLR_BIT(GICR,INT2);
#else
	SET_BIT(GICR,INT2);
#endif

#if (EXTINT_INT1_ENABLE	== DISABLE)
	CLR_BIT(GICR,INT1);
#else
	SET_BIT(GICR,INT1);
#endif

#if (EXTINT_INT0_ENABLE	== DISABLE)
	CLR_BIT(GICR,INT0);
#else
	SET_BIT(GICR,INT0);
#endif
}


void EXTINT_voidChangeINT0Ptr(void(*local_INT0Ptr) (void))
{
	INT0Ptr = local_INT0Ptr;
}
void EXTINT_voidChangeINT1Ptr(void(*local_INT1Ptr) (void))
{
	INT1Ptr = local_INT1Ptr;
}
void EXTINT_voidChangeINT2Ptr(void(*local_INT2Ptr) (void))
{
	INT2Ptr = local_INT2Ptr;
}
void __vector_1 (void)
{
	(*INT0Ptr)();
}
void __vector_2 (void)
{
	(*INT1Ptr)();
}
void __vector_3 (void)
{
	(*INT2Ptr)();
}
