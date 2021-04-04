#include "system.h"

extern void start_work_thread(void);

int main(void) {
  int i = 0;
  uint32_t tick = 0;

  system_init();

  for (i = 0; i < 3; i++) {
    sleep_ms(1000);
    system_log("hello %d\n", i);
  }

  start_work_thread();
  rtos_start();

  system_exit();

  return 0;
}
