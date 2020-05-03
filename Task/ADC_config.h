#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

/*select 1 of them for ADC_VREF
 *   ADC_AREF
 *   ADC_AVCC
 *   ADC_INT2_5V
 */
#define ADC_VREF ADC_AVCC

/* ADC_CH_SELECT
 * ADC_CH0
 * ADC_CH1
 * ADC_CH2
 * ADC_CH3
 * ADC_CH4
 * ADC_CH5
 * ADC_CH6
 * ADC_CH7
 */

#define ADC_CH ADC_CH0
/*
 * ADC_DIV2
 * ADC_DIV4
 * ADC_DIV8
 * ADC_DIV16
 * ADC_DIV32
 * ADC_DIV64
 * ADC_DIV128
 */
#define ADC_CLKDIV ADC_DIV2









#endif /* ADC_CONFIG_H_ */
