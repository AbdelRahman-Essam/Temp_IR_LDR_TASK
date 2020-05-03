#ifndef DIO_int
#define DIO_int

#include "std_types.h"

#define DIO_HIGH 1
#define DIO_LOW 0

void DIO_voidInit(void);
void DIO_voidSetPin (u8 local_pinNumber, u8 local_pinValue);
u8 DIO_u8GetPin(u8 local_pinNumber);
void DIO_voidSetPort(u8 Local_PortNumber,u8 Local_Value);




#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7



#define DIO_PIN8 8
#define DIO_PIN9 9
#define DIO_PIN10 10
#define DIO_PIN11 11
#define DIO_PIN12 12
#define DIO_PIN13 13
#define DIO_PIN14 14
#define DIO_PIN15 15


#define DIO_PIN16 16
#define DIO_PIN17 17
#define DIO_PIN18 18
#define DIO_PIN19 19
#define DIO_PIN20 20
#define DIO_PIN21 21
#define DIO_PIN22 22
#define DIO_PIN23 23


#define DIO_PIN24 24
#define DIO_PIN25 25
#define DIO_PIN26 26
#define DIO_PIN27 27
#define DIO_PIN28 28
#define DIO_PIN29 29
#define DIO_PIN30 30
#define DIO_PIN31 31

#define DIO_PORTA   0
#define DIO_PORTB   1
#define DIO_PORTC   2
#define DIO_PORTD   3

#endif
