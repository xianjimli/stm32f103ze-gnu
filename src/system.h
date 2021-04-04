#ifndef MY_SYSTEM_H
#define MY_SYSTEM_H

#include <stdint.h>
#include "rtos.h"

int system_init(void);
int system_exit(void);
uint64_t get_time_ms64();
void sleep_ms(uint32_t ms);

int system_log(const char* format, ...);

#endif /*MY_SYSTEM_H*/
