#include "DIO_priv.h"
#include "DIO_config.h"
#include "DIO_int.h"

#include "utils.h"

//write the macro like func of CONCBIT
#define CONCBIT(pin7,pin6,pin5,pin4,pin3,pin2,pin1,pin0) CONCBIT_HELPER(pin7,pin6,pin5,pin4,pin3,pin2,pin1,pin0)
#define CONCBIT_HELPER(pin7,pin6,pin5,pin4,pin3,pin2,pin1,pin0) 0b##pin7##pin6##pin5##pin4##pin3##pin2##pin1##pin0
#define PORTA_DIR CONCBIT(DIO_PIN7_DIR, DIO_PIN6_DIR, DIO_PIN5_DIR, DIO_PIN4_DIR, DIO_PIN3_DIR, DIO_PIN2_DIR, DIO_PIN1_DIR, DIO_PIN0_DIR)
#define PORTB_DIR CONCBIT(DIO_PIN15_DIR, DIO_PIN14_DIR, DIO_PIN13_DIR, DIO_PIN12_DIR, DIO_PIN11_DIR, DIO_PIN10_DIR, DIO_PIN9_DIR, DIO_PIN8_DIR)
#define PORTC_DIR CONCBIT(DIO_PIN23_DIR, DIO_PIN22_DIR, DIO_PIN21_DIR, DIO_PIN20_DIR, DIO_PIN19_DIR, DIO_PIN18_DIR, DIO_PIN17_DIR, DIO_PIN16_DIR)
#define PORTD_DIR CONCBIT(DIO_PIN31_DIR, DIO_PIN30_DIR, DIO_PIN29_DIR, DIO_PIN28_DIR, DIO_PIN27_DIR, DIO_PIN26_DIR, DIO_PIN25_DIR, DIO_PIN24_DIR)
void DIO_voidInit(void)
{
	DDRA = PORTA_DIR;
	DDRB = PORTB_DIR;
	DDRC = PORTC_DIR;
	DDRD = PORTD_DIR;
}


void DIO_voidSetPin (u8 local_pinNumber, u8 local_pinValue)
{

	if (local_pinNumber < 8)
	{
		if (local_pinValue == DIO_HIGH)
			SET_BIT (PORTA, local_pinNumber);
		else
			CLR_BIT (PORTA, local_pinNumber);
	}
	else if (local_pinNumber < 16)
	{
		if (local_pinValue == DIO_HIGH)
			SET_BIT (PORTB, (local_pinNumber-8));
		else
			CLR_BIT (PORTB, (local_pinNumber-8));
	}
	else if (local_pinNumber < 24)
	{
		if (local_pinValue == DIO_HIGH)
			SET_BIT (PORTC, (local_pinNumber-16));
		else
			CLR_BIT (PORTC, (local_pinNumber-16));
	}
	else if (local_pinNumber < 32)
	{
		if (local_pinValue == DIO_HIGH)
			SET_BIT (PORTD, (local_pinNumber-24));
		else
			CLR_BIT (PORTD, (local_pinNumber-24));
	}
}

void DIO_voidSetPort(u8 Local_PortNumber,u8 Local_Value)
{
    if(Local_PortNumber == 0)
	{
	    PORTA = Local_Value;

    }else if(Local_PortNumber == 1)
    {
        PORTB = Local_Value;
    }else if(Local_PortNumber == 2)
    {
        PORTC = Local_Value;
    }else if(Local_PortNumber == 3)
    {
        PORTD = Local_Value;
    }


}

u8 DIO_u8GetPin(u8 local_pinNumber)
{
	if (local_pinNumber < 8)
	{
		return (GET_BIT(PINA, local_pinNumber));
	}
	else if (local_pinNumber < 16)
	{
		return (GET_BIT(PINB, (local_pinNumber-8)));
	}
	else if (local_pinNumber < 24)
	{
		return (GET_BIT(PINC, (local_pinNumber - 16)));
	}
	else if (local_pinNumber < 32)
	{
		return (GET_BIT(PIND, (local_pinNumber-24)));
	}
	else return 0;
}
