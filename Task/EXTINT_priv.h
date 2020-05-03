
#ifndef EXTINT_PRIV_H_
#define EXTINT_PRIV_H_
#define MCUCR (*(volatile u8 *)(0x55))
#define GICR (*(volatile u8 *)(0x5B))
#define GIFR (*(volatile u8 *)(0x5A))
#define MCUCSR (*(volatile u8 *)(0x54))
#define SREG (*(volatile u8 *)(0x5F))

#define ISC01	1
#define ISC00	0
#define ISC11	3
#define ISC10	2
#define ISC2	6
#define INT2	5
#define INT1	7
#define INT0	6
#define INTF2	5
#define INTF1	7
#define INTF0	6

#define LOW_LEVEL        	0
#define LOGICAL_CHANGE		1
#define RISING_EDGE			2
#define FALLING_EDGE		3

#define ENABLE				0
#define DISABLE				1








#endif /* EXTINT_PRIV_H_ */
