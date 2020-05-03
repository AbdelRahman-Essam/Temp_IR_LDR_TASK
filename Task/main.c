#include "DIO_int.h"
#include "DIO_priv.h"
#include "ADC_priv.h"
#include "ADC_int.h"
#include "EXTINT_int.h"
#include "IR_int.h"
void ADC_ISR(void);
u8 LDR_SENSOR=0;
u16 TEMP_SENSOR=0;



int main()
{
	DIO_voidInit();
	ADC_voidSetISRPtr(ADC_ISR);
	ADC_voidInit();
	EXTINT_voidInit();
	SETBIT(SREG,7);



	while(1)
	{
		ADC_voidStartConv();
		u8 LDR_SENSOR = GETBIT(PINA,6);
		//IR Detection
		if(IR_u8isON())
			DIO_voidSetPin(16,1);
		else
			DIO_voidSetPin(16,0);

		//LDR Detection
		if(LDR_SENSOR)
			DIO_voidSetPin(17,1);
		else
			DIO_voidSetPin(17,0);
	}
	return 0;
}


void ADC_ISR(void)
{
	u16 TEMP_SENSOR =ADC_u16GetData()*700/1023  ;
	if(TEMP_SENSOR>=50)
		DIO_voidSetPin(18,1);
		else
		DIO_voidSetPin(18,0);
}
