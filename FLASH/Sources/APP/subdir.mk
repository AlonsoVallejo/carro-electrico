################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/APP/seno.c" \

C_SRCS += \
../Sources/APP/seno.c \

OBJS += \
./Sources/APP/seno.o \

C_DEPS += \
./Sources/APP/seno.d \

OBJS_QUOTED += \
"./Sources/APP/seno.o" \

C_DEPS_QUOTED += \
"./Sources/APP/seno.d" \

OBJS_OS_FORMAT += \
./Sources/APP/seno.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/APP/seno.o: ../Sources/APP/seno.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/APP/seno.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/APP/seno.o"
	@echo 'Finished building: $<'
	@echo ' '


