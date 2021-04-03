#include "system.h"

int main(void) {
  int i = 0;
  uint32_t tick = 0;

  system_init();

  for (i = 0; i < 100; i++) {
    sleep_ms(100);
  }

  system_exit();

  return 0;
}
