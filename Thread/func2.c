/********************************************************
 * 
 *
 * A  simple function that periodically prints 
 *             and then sleeps
 *     
 *
 ********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void func2(void) {
  int i;
  for (i = 1; i < 8; ++i) {
    printf("Function func2 prints and then sleeps 3 s: %d\n", i);
    * args[0] += 1;
    sleep(3);
    * args[1] += 1;
  }
  return;
}