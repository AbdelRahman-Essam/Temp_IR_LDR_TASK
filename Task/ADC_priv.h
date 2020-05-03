#ifndef ADC_PRIV_H_
#define ADC_PRIV_H_
// voltage references
#define ADC_AREF    1
#define ADC_AVCC    2
#define ADC_INT2_5V 3

#define ADMUX (*(volatile u8 *)(0x27))
#define ADCSRA (*(volatile u8 *)(0x26))
#define SFIOR (*(volatile u8 *)(0x50))
#define ADCH (*(volatile u8 *)(0x25))
#define ADCL (*(volatile u8 *)(0x24))
#define SREG (*(volatile u8 *)(0x5F))

#define REFS1	7
#define REFS0	6
#define ADLAR	5
#define MUX4	4
#define MUX3	3
#define MUX2	2
#define MUX1	1
#define MUX0	0

#define ADEN	7
#define ADSC	6
#define ADATE	5
#define ADIF	4
#define ADIE	3
#define ADPS2	2
#define ADPS1	1
#define ADPS0	0

#define ADTS2	7
#define ADTS1	6
#define ADTS0	5






// ADC channels

#define ADC_CH0 0
#define ADC_CH1 1
#define ADC_CH2 2
#define ADC_CH3 3
#define ADC_CH4 4
#define ADC_CH5 5
#define ADC_CH6 6
#define ADC_CH7 7


// clock divisors
#define ADC_DIV2 2
#define ADC_DIV4 4
#define ADC_DIV8 8
#define ADC_DIV16 16
#define ADC_DIV32 32
#define ADC_DIV64 64
#define ADC_DIV128 128


#endif /* ADC_PRIV_H_ */
