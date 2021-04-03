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

到网上找一个模版改一下(github上有很多，但是我忘记从哪里弄来的了)。

## 准备openocd的配置

以下面两个文件作为模版，修改一下配置即可。

```
https://github.com/rust-embedded/cortex-m-quickstart/blob/master/openocd.cfg
https://github.com/rust-embedded/cortex-m-quickstart/blob/master/openocd.gdb
```


