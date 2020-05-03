
#ifndef utils
#define utils

#include "std_types.h"


#define SET_BIT(reg, n) (reg |= (1<<n))
#define CLR_BIT(reg, n) (reg &=  ~(1<<n))
#define TOG_BIT(reg, n) (reg ^=(1<<n))
#define GET_BIT(reg, n) ((reg>>n)&1)

#define SETBIT(reg, n) (reg |= (1<<n))
#define CLRBIT(reg, n) (reg &=  ~(1<<n))
#define TOGBIT(reg, n) (reg ^=(1<<n))
#define GETBIT(reg, n) ((reg>>n)&1)


#define SET_NBL_LOW(reg) (reg |= (0x0F))
#define SET_NBL_HIGH(reg) (reg |= (0xF0))

#define RST_NBL_LOW(reg) (reg &= (0xF0))
#define RST_NBL_HIGH(reg) (reg &= (0x0F))

#define TOG_NBL_LOW(reg) (reg ^=(0x0F))
#define TOG_NBL_HIGH(reg) (reg ^=(0xF0))

#define GET_NBL_LOW(reg) ((reg)&0x0F)
#define GET_NBL_HIGH(reg) ((reg>>4)&0x0F)



#define SET_NBL_VAL_LOW(reg, val) (reg|=((reg &= (0xF0))|(val & 0x0F)))
#define SET_NBL_VAL_HIGH(reg, val) (reg|=((reg &= (0x0F))|(val & 0xF0)))

#endif
