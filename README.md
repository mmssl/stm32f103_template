# stm32f103_template

This is a template project for [stm32f103](http://www.st.com/content/st_com/en/products/microcontrollers/stm32-32-bit-arm-cortex-mcus/stm32f1-series/stm32f103.html?querycriteria=productId=LN1565) microcontroller (driving an LED).
The project requires the following:
- [GNU Tools for ARM Embedded Processors toolchain](https://launchpad.net/gcc-arm-embedded)
- [STLINK software](https://github.com/texane/stlink) 
- [STM32 Standard Peripheral Libraries](http://www.st.com/content/st_com/en/products/embedded-software/mcus-embedded-software/stm32-embedded-software/stm32-standard-peripheral-libraries/stsw-stm32054.html)

# How to use

This is base template for STM32F103 series MCU with Makefile. To compile the code you need to use <pre><span style="color:#E60013">make</span></pre> 
then the output should be like that:
<pre>arm-none-eabi-gcc -g -O0 -Wall -T./STM32F10x_StdPeriph_Lib_V3.6.0//Project/STM32F10x_StdPeriph_Template/TrueSTUDIO/STM3210B-EVAL/stm32_flash.ld 
-mlittle-endian -mthumb -mcpu=cortex-m4 -mthumb-interwork -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F10X_MD -DUSE_STDPERIPH_DRIVER -Wl,--gc-sections 
-I. -I./STM32F10x_StdPeriph_Lib_V3.6.0//Libraries/CMSIS/CM3/DeviceSupport/ST/STM32F10x/ -I./STM32F10x_StdPeriph_Lib_V3.6.0//Libraries/CMSIS/CM3/CoreSupport 
-I./STM32F10x_StdPeriph_Lib_V3.6.0//Libraries/STM32F10x_StdPeriph_Driver/inc main.c 
STM32F10x_StdPeriph_Lib_V3.6.0//Libraries/CMSIS/CM3/DeviceSupport/ST/STM32F10x/system_stm32f10x.c 
STM32F10x_StdPeriph_Lib_V3.6.0//Libraries/CMSIS/CM3/DeviceSupport/ST/STM32F10x/startup/TrueSTUDIO/startup_stm32f10x_md.s -o main.elf
arm-none-eabi-objcopy -O ihex main.elf main.hex
arm-none-eabi-objcopy -O binary main.elf main.bin</pre>

To flash the code to MCU you can simply write:
<pre><span style="color:#E60013">make</span> <span style="color:#75B0CF">burn</span> </pre>

To clean up the code:
<pre> <span style="color:#E60013">make</span> <span style="color:#75B0CF">clean</span> </pre>

output will be like this:
<pre>rm -f *.o main.elf main.hex main.bin</pre>

