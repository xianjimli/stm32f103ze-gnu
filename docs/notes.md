# Notes

## 准备 STM32F1xx\_HAL

从rtthread将./bsp/stm32/libraries/STM32F1xx\_HAL拷贝到3rd。

```
cp -rf ../rt-thread/bsp/stm32/libraries/STM32F1xx_HAL 3rd 
```

进入3rd/STM32F1xx\_HAL。新建目录system

```
mkdir system
```

从模板中拷贝一些文件到system目录。

```
cp ./STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_conf_template.h system/stm32f1xx_hal_conf.h
cp ./CMSIS/Device/ST/STM32F1xx/Source/Templates/gcc/startup_stm32f103xe.s system
cp ./CMSIS/Device/ST/STM32F1xx/Source/Templates/system_stm32f1xx.c system
```

修改startup_stm32f103xe.s，跳到main函数。

```
 .global main
 ...
 bl main
```

## 准备stm32\_flash.ld文件

```
cp 3rd/STM32F1xx_HAL/CMSIS/Device/ST/STM32F1xx/Source/Templates/gcc/linker/STM32F103XE_FLASH.ld stm32_flash.ld
```

## 准备openocd的配置

以下面两个文件作为模版，修改一下配置即可。

```
https://github.com/rust-embedded/cortex-m-quickstart/blob/master/openocd.cfg
https://github.com/rust-embedded/cortex-m-quickstart/blob/master/openocd.gdb
```

## 参考资料
 * https://bgamari.github.io/posts/2014-10-31-semihosting.html
 * https://github.com/zhiyb/SRAMLoader/blob/0d38d09c973e88df3a9060dbbe02c2f5020e99bc/debug.h
 * https://ww1.microchip.com/downloads/en/DeviceDoc/Frequently-Asked-Questions-4.9.3.26.txt
 * https://blog.louie.lu/2016/11/27/arm-semihosting-%E7%B0%A1%E4%BB%8B%E8%88%87%E7%AF%84%E4%BE%8B/

