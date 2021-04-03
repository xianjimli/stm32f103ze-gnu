import os


APP_ASFLAGS = '-mthumb -mcpu=cortex-m3  '
APP_CCFLAGS = '-DUSE_STDPERIPH_DRIVER -DSTM32F10X_HD -mthumb -mcpu=cortex-m3 -g -DSTM32F103xE '
APP_LINKFLAGS = '-mthumb -mcpu=cortex-m3 -T stm32_flash.ld -Wl,-cref,-u,Reset_Handler -Wl,-Map=test.map -Wl,--gc-sections -Wl,--defsym=malloc_getpagesize_P=0x80 -Wl,--start-group -lc -lm -Wl,--end-group '
APP_ROOT=os.getcwd()
APP_LIB=os.path.join(APP_ROOT, "lib")
APP_BIN=os.path.join(APP_ROOT, "bin")

os.environ['APP_LIB'] = APP_LIB
os.environ['APP_BIN'] = APP_BIN

APP_LIBS =[]
APP_CPPPATH=[
  os.path.join(APP_ROOT, '3rd/STM32F1xx_HAL/system'),
  os.path.join(APP_ROOT, '3rd/STM32F1xx_HAL/CMSIS/Include'),
  os.path.join(APP_ROOT, '3rd/STM32F1xx_HAL/STM32F1xx_HAL_Driver/Inc'),
  os.path.join(APP_ROOT, '3rd/STM32F1xx_HAL/CMSIS/Device/ST/STM32F1xx/Include'),
  os.path.join(APP_ROOT, '3rd/STM32F1xx_HAL/STM32F1xx_HAL_Driver/Inc')
]

APP_LIBPATH = [APP_LIB]
DefaultEnvironment(
  CC='arm-none-eabi-gcc',
  CXX='arm-none-eabi-g++',
  LD='arm-none-eabi-ld',
  AR='arm-none-eabi-ar',
  AS='arm-none-eabi-as',
  RANLIB='arm-none-eabi-ranlib',
  STRIP='arm-none-eabi-strip',

  CCFLAGS = APP_CCFLAGS,
  LIBS = APP_LIBS,
  LIBPATH = APP_LIBPATH,
  CPPPATH = APP_CPPPATH,
  LINKFLAGS = APP_LINKFLAGS,
  ASFLAGS = APP_ASFLAGS
)

SConscript(['src/SConscript', '3rd/STM32F1xx_HAL/SConscript'])

