#include <stdlib.h>
#include <stdio.h>
#include "c21.h"

void demalloc(void ** address)
{
  printf("Cleaning up the memory\n");
  free(*address);
}

void test_defer(void)
{
  defer(demalloc) void * random = malloc(50);
  exit(0);
}

int main(int argc, char *argv[])
{
  var hello = -1;
  printf("sizeof hello %lu\n", sizeof(hello));
  test_defer();
  return 0;
}
