################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/STM32_RFM69HWC_Driver/src/rfm69.c 

OBJS += \
./Drivers/STM32_RFM69HWC_Driver/src/rfm69.o 

C_DEPS += \
./Drivers/STM32_RFM69HWC_Driver/src/rfm69.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/STM32_RFM69HWC_Driver/src/%.o Drivers/STM32_RFM69HWC_Driver/src/%.su Drivers/STM32_RFM69HWC_Driver/src/%.cyclo: ../Drivers/STM32_RFM69HWC_Driver/src/%.c Drivers/STM32_RFM69HWC_Driver/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-STM32_RFM69HWC_Driver-2f-src

clean-Drivers-2f-STM32_RFM69HWC_Driver-2f-src:
	-$(RM) ./Drivers/STM32_RFM69HWC_Driver/src/rfm69.cyclo ./Drivers/STM32_RFM69HWC_Driver/src/rfm69.d ./Drivers/STM32_RFM69HWC_Driver/src/rfm69.o ./Drivers/STM32_RFM69HWC_Driver/src/rfm69.su

.PHONY: clean-Drivers-2f-STM32_RFM69HWC_Driver-2f-src

