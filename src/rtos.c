#include "tos_k.h"

int rtos_init(void) {
  tos_knl_init();

  return 0;
}

int rtos_start(void) {
  tos_knl_start();

  return 0;
}

void rtos_tick(void) {
  if (tos_knl_is_running()) {
    tos_knl_irq_enter();
    tos_tick_handler();
    tos_knl_irq_leave();
  }
}

void rtos_delay(uint32_t ms) {
  tos_task_delay(ms);
}
