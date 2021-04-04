#include "debug.h"
#include "system.h"

int main(void) {
  int i = 0;
  uint32_t tick = 0;

  system_init();

  for (i = 0; i < 100000; i++) {
    sleep_ms(1000);
    system_log("hello %d\n", i);
  }

  system_exit();

  return 0;
}
