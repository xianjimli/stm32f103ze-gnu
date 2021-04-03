#include <stdint.h>
#include "stm32f1xx_hal.h"
#include "system_stm32f1xx.h"

int main(void) {
  int i = 0;
  uint32_t tick = 0;

  HAL_Init();

  for(i = 0; i < 100; i++) {
  }

  HAL_DeInit();
  return 0;
}
