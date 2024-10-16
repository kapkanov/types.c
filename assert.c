#ifndef ASSERT_C
#define ASSERT_C

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void assert(const int condition, const unsigned char format[], ...) {
  if (0 != condition)
    return;
  printf("Assertion failed\n");
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  va_end(args);
  exit(1);
}
#endif
