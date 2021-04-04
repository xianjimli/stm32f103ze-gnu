// adapt from
// https://github.com/zhiyb/SRAMLoader/blob/0d38d09c973e88df3a9060dbbe02c2f5020e99bc/debug.h

#ifndef DEBUG_H
#define DEBUG_H

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef NDEBUG

#define dbbkpt() asm("bkpt #0")

static int dbcmd(int cmd, void *data) {
  register int r0 asm("r0");
  asm("mov r0, %0\n\t"
      "mov r1, %1\n\t"
      "bkpt #0xAB\n\t"
      :
      : "r"(cmd), "r"(data)
      : "r0", "r1");
  return r0;
}

// SYS_WRITE0
static void dbputs(char *str) { dbcmd(0x04, str); }

// SYS_WRITEC
static void dbputc(char c) { dbcmd(0x03, &c); }

static void dbsystem(char *cmd) {
  int data[2] = {(int)cmd, (int)strlen(cmd)};
  dbcmd(0x12, data); // SYS_SYSTEM
}

#else // DEBUG

#define dbbkpt() ((void)0)
#define dbputs(str) ((void)0)
#define dbputc(str) ((void)0)
#define dbsystem(str) ((void)0)

#endif // DEBUG

#ifdef __cplusplus
}
#endif

#endif // DEBUG_H
