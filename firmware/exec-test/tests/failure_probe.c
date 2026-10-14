#include <unistd.h>
#include <stdio.h>
int main(void) {
#if TEST_KIND == 1
  __asm__ volatile(".word 0xffffffff");
#elif TEST_KIND == 2
  puts("FLOOD-OK");
  for(int i=0;i<20000;i++)puts("bounded diagnostic flood fixture");
#elif TEST_KIND == 3
  sleep(60);
#endif
  return 0;
}
