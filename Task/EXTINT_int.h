
#ifndef EXTINT_INT_H_
#define EXTINT_INT_H_
void  EXTINT_voidInit(void);
void EXTINT_voidChangeINT0Ptr(void(*local_INT0Ptr) (void));
void EXTINT_voidChangeINT1Ptr(void(*local_INT1Ptr) (void));
void EXTINT_voidChangeINT2Ptr(void(*local_INT2Ptr) (void));

#endif /* EXTINT_INT_H_ */
