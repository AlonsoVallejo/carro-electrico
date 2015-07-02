################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/drivers/ARM_SysTick.c" \
"../Sources/drivers/Clock.c" \
"../Sources/drivers/FTM.c" \
"../Sources/drivers/GPIO.c" \
"../Sources/drivers/PIT.c" \
"../Sources/drivers/nvic.c" \

C_SRCS += \
../Sources/drivers/ARM_SysTick.c \
../Sources/drivers/Clock.c \
../Sources/drivers/FTM.c \
../Sources/drivers/GPIO.c \
../Sources/drivers/PIT.c \
../Sources/drivers/nvic.c \

OBJS += \
./Sources/drivers/ARM_SysTick.o \
./Sources/drivers/Clock.o \
./Sources/drivers/FTM.o \
./Sources/drivers/GPIO.o \
./Sources/drivers/PIT.o \
./Sources/drivers/nvic.o \

C_DEPS += \
./Sources/drivers/ARM_SysTick.d \
./Sources/drivers/Clock.d \
./Sources/drivers/FTM.d \
./Sources/drivers/GPIO.d \
./Sources/drivers/PIT.d \
./Sources/drivers/nvic.d \

OBJS_QUOTED += \
"./Sources/drivers/ARM_SysTick.o" \
"./Sources/drivers/Clock.o" \
"./Sources/drivers/FTM.o" \
"./Sources/drivers/GPIO.o" \
"./Sources/drivers/PIT.o" \
"./Sources/drivers/nvic.o" \

C_DEPS_QUOTED += \
"./Sources/drivers/ARM_SysTick.d" \
"./Sources/drivers/Clock.d" \
"./Sources/drivers/FTM.d" \
"./Sources/drivers/GPIO.d" \
"./Sources/drivers/PIT.d" \
"./Sources/drivers/nvic.d" \

OBJS_OS_FORMAT += \
./Sources/drivers/ARM_SysTick.o \
./Sources/drivers/Clock.o \
./Sources/drivers/FTM.o \
./Sources/drivers/GPIO.o \
./Sources/drivers/PIT.o \
./Sources/drivers/nvic.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/drivers/ARM_SysTick.o: ../Sources/drivers/ARM_SysTick.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/drivers/ARM_SysTick.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/drivers/ARM_SysTick.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/drivers/Clock.o: ../Sources/drivers/Clock.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/drivers/Clock.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/drivers/Clock.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/drivers/FTM.o: ../Sources/drivers/FTM.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/drivers/FTM.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/drivers/FTM.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/drivers/GPIO.o: ../Sources/drivers/GPIO.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/drivers/GPIO.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/drivers/GPIO.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/drivers/PIT.o: ../Sources/drivers/PIT.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/drivers/PIT.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/drivers/PIT.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/drivers/nvic.o: ../Sources/drivers/nvic.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/drivers/nvic.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/drivers/nvic.o"
	@echo 'Finished building: $<'
	@echo ' '


