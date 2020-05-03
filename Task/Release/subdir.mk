################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC_prog.c \
../DIO_Prog.c \
../EXTINT_prog.c \
../IR_prog.c \
../main.c 

OBJS += \
./ADC_prog.o \
./DIO_Prog.o \
./EXTINT_prog.o \
./IR_prog.o \
./main.o 

C_DEPS += \
./ADC_prog.d \
./DIO_Prog.d \
./EXTINT_prog.d \
./IR_prog.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


