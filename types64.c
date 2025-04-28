#ifndef TYPES64_C
#define TYPES64_C


void assert(const int condition, const unsigned char format[], ...);
void assert_types64(void);


#ifndef ASSERT_C
#define ASSERT_C

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void assert(const int condition, const unsigned char format[], ...) {
  if (0 != condition)
    return;

  printf("Assertion failed. ");

  va_list args;
  va_start(args, format);
  vprintf(format, args);
  va_end(args);

  putchar('\n');
  exit(1);
}
#endif

typedef long long int          I64;
typedef unsigned long long int U64;
typedef double                 F64;

void assert_types64(void) {
  assert(sizeof(I64) == 8, "sizeof(I64) != 8\n");
  assert(sizeof(U64) == 8, "sizeof(U64) != 8\n");
  assert(sizeof(F64) == 8, "sizeof(F64) != 8\n");
}

#endif
