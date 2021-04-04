#include "tos_k.h"
#include "rtos.h"
#include "system.h"

static k_task_t s_work_task;
static uint32_t s_work_task_stack[1024];

static void work_func(void *arg) {
  int i = 0;
  for(i = 0; i < 100; i++) {
    rtos_delay(1000); 
    system_log("work func %d\n", i);
  }
}

void start_work_thread(void) {
  if (tos_task_create(&(s_work_task), "work", work_func, NULL, 
    0, (k_stack_t*)s_work_task_stack, sizeof(s_work_task_stack), 20) != K_ERR_NONE) {
    system_log("create thread failed\n");
  } else {
    system_log("create thread ok\n");
  }
}
