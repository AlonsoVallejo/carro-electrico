################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS_QUOTED += \
"../Project_Settings/Startup_Code/startup_MK64F12.S" \

S_UPPER_SRCS += \
../Project_Settings/Startup_Code/startup_MK64F12.S \

C_SRCS_QUOTED += \
"../Project_Settings/Startup_Code/__arm_end.c" \
"../Project_Settings/Startup_Code/__arm_start.c" \
"../Project_Settings/Startup_Code/system_MK64F12.c" \

C_SRCS += \
../Project_Settings/Startup_Code/__arm_end.c \
../Project_Settings/Startup_Code/__arm_start.c \
../Project_Settings/Startup_Code/system_MK64F12.c \

OBJS += \
./Project_Settings/Startup_Code/__arm_end.o \
./Project_Settings/Startup_Code/__arm_start.o \
./Project_Settings/Startup_Code/startup_MK64F12.o \
./Project_Settings/Startup_Code/system_MK64F12.o \

C_DEPS += \
./Project_Settings/Startup_Code/__arm_end.d \
./Project_Settings/Startup_Code/__arm_start.d \
./Project_Settings/Startup_Code/system_MK64F12.d \

S_UPPER_DEPS += \
./Project_Settings/Startup_Code/startup_MK64F12.d \

OBJS_QUOTED += \
"./Project_Settings/Startup_Code/__arm_end.o" \
"./Project_Settings/Startup_Code/__arm_start.o" \
"./Project_Settings/Startup_Code/startup_MK64F12.o" \
"./Project_Settings/Startup_Code/system_MK64F12.o" \

S_UPPER_DEPS_QUOTED += \
"./Project_Settings/Startup_Code/startup_MK64F12.d" \

C_DEPS_QUOTED += \
"./Project_Settings/Startup_Code/__arm_end.d" \
"./Project_Settings/Startup_Code/__arm_start.d" \
"./Project_Settings/Startup_Code/system_MK64F12.d" \

OBJS_OS_FORMAT += \
./Project_Settings/Startup_Code/__arm_end.o \
./Project_Settings/Startup_Code/__arm_start.o \
./Project_Settings/Startup_Code/startup_MK64F12.o \
./Project_Settings/Startup_Code/system_MK64F12.o \


# Each subdirectory must supply rules for building sources it contributes
Project_Settings/Startup_Code/__arm_end.o: ../Project_Settings/Startup_Code/__arm_end.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Settings/Startup_Code/__arm_end.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Settings/Startup_Code/__arm_end.o"
	@echo 'Finished building: $<'
	@echo ' '

Project_Settings/Startup_Code/__arm_start.o: ../Project_Settings/Startup_Code/__arm_start.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Settings/Startup_Code/__arm_start.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Settings/Startup_Code/__arm_start.o"
	@echo 'Finished building: $<'
	@echo ' '

Project_Settings/Startup_Code/startup_MK64F12.o: ../Project_Settings/Startup_Code/startup_MK64F12.S
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC Assembler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Settings/Startup_Code/startup_MK64F12.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Settings/Startup_Code/startup_MK64F12.o"
	@echo 'Finished building: $<'
	@echo ' '

Project_Settings/Startup_Code/system_MK64F12.o: ../Project_Settings/Startup_Code/system_MK64F12.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Settings/Startup_Code/system_MK64F12.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Settings/Startup_Code/system_MK64F12.o"
	@echo 'Finished building: $<'
	@echo ' '


