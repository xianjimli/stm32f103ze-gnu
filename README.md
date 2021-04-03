# stm32f103ze-gnu

演示使用 gnu 工具链编译和调试 stm32f103ze 开发板

## 安装环境

> Mac

```
# GDB
brew install armmbed/formulae/arm-none-eabi-gcc

# OpenOCD
brew install openocd

# scons
brew install scons
```

## 编译

```
scons
```

## 调试

* 连接好开发板

```
# lsusb 

Bus 020 Device 029: ID 1366:0105 1366 J-Link  Serial: xxxxx
```

* 启动 openocd

```
openocd
```

* 启动调试器

```
arm-none-eabi-gdb bin/demo.elf -x openocd.gdb
```
