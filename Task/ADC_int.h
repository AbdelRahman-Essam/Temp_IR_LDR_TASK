#include "utils.h"
#include "std_types.h"
#ifndef ADC_INT_H_
#define ADC_INT_H_
void ADC_voidInit(void);
u16 ADC_u16GetData (void);
void ADC_voidStartConv(void);
void ADC_voidSetISRPtr(void(*local_fptr)(void));
void ADC_voidChangeChannel(u8 local_channelNo);

#endif /* ADC_INT_H_ */
