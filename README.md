# stm32f103ze-gnu
使用gnu工具链编译和调试stm32f103ze开发板

## 编译

```
scons
```

## 调试

启动openocd

```
openocd
```

启动调试器

```
arm-none-eabi-gdb bin/demo.elf -x openocd.gdb
```
