#include "DIO_int.h"
#include "DIO_config.h"
#include "utils.h"
#include "IR_config.h"
#include "IR_priv.h"
#include "IR_int.h"

u8 IR_u8isON(void)
{
	u8 IR_value=0;
	if(DIO_u8GetPin(IR_SENSOR))
	{
	IR_value =1;
	}
	else
	IR_value =0;

return (IR_value);
}






