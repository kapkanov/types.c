#include "../types32.c"
#include "../types64.c"

I32 main(void) {
  assert_types32();
  assert_types64();

  return 0;
}
