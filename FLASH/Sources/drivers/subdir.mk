################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/drivers/ADC.c" \
"../Sources/drivers/FTM.c" \
"../Sources/drivers/GPIO.c" \
"../Sources/drivers/PIT.c" \

C_SRCS += \
../Sources/drivers/ADC.c \
../Sources/drivers/FTM.c \
../Sources/drivers/GPIO.c \
../Sources/drivers/PIT.c \

OBJS += \
./Sources/drivers/ADC.o \
./Sources/drivers/FTM.o \
./Sources/drivers/GPIO.o \
./Sources/drivers/PIT.o \

C_DEPS += \
./Sources/drivers/ADC.d \
./Sources/drivers/FTM.d \
./Sources/drivers/GPIO.d \
./Sources/drivers/PIT.d \

OBJS_QUOTED += \
"./Sources/drivers/ADC.o" \
"./Sources/drivers/FTM.o" \
"./Sources/drivers/GPIO.o" \
"./Sources/drivers/PIT.o" \

C_DEPS_QUOTED += \
"./Sources/drivers/ADC.d" \
"./Sources/drivers/FTM.d" \
"./Sources/drivers/GPIO.d" \
"./Sources/drivers/PIT.d" \

OBJS_OS_FORMAT += \
./Sources/drivers/ADC.o \
./Sources/drivers/FTM.o \
./Sources/drivers/GPIO.o \
./Sources/drivers/PIT.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/drivers/ADC.o: ../Sources/drivers/ADC.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/drivers/ADC.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/drivers/ADC.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/drivers/FTM.o: ../Sources/drivers/FTM.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/drivers/FTM.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/drivers/FTM.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/drivers/GPIO.o: ../Sources/drivers/GPIO.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/drivers/GPIO.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/drivers/GPIO.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/drivers/PIT.o: ../Sources/drivers/PIT.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/drivers/PIT.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/drivers/PIT.o"
	@echo 'Finished building: $<'
	@echo ' '


