#include <stdio.h>

int main(void) {
  int cont = 0;

  for(cont = 1; cont <= 10; cont++) {
      printf("%d x 2 = %d \n", cont, 2*cont);
  }

  return 0;
}
