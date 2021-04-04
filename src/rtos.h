
#ifndef RTOS_H
#define RTOS_H

int rtos_init(void);
int rtos_start(void);
void rtos_tick(void);
void rtos_delay(uint32_t ms);

#endif/*RTOS_H*/
