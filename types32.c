#ifndef TYPES32_C
#define TYPES32_C


void assert(const int condition, const unsigned char format[], ...);
void assert_types32(void);


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

typedef char           I8;
typedef unsigned char  U8;
typedef short          I16;
typedef unsigned short U16;
typedef int            I32;
typedef unsigned int   U32;
typedef float          F32;

void assert_types32(void) {
  assert(sizeof(I8)  == 1, "sizeof(I8) != 1");
  assert(sizeof(U8)  == 1, "sizeof(U8) != 1");
  assert(sizeof(I16) == 2, "sizeof(I16) != 2");
  assert(sizeof(U16) == 2, "sizeof(U16) != 2");
  assert(sizeof(I32) == 4, "sizeof(I32) != 4");
  assert(sizeof(U32) == 4, "sizeof(U32) != 4");
  assert(sizeof(F32) == 4, "sizeof(F32) != 4");
}

#endif
