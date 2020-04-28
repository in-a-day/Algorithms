#include <malloc.h>
#include <stdio.h>

void pp(int a) { printf("%d \n", a); }

void ppa(int *a, int l) {
  printf("\n[");
  for (int i = 0; i < l; i++) {
    if (i == l - 1)
      printf("%d", *(a + i));
    else
      printf("%d, ", *(a + i));
  }
  printf("]\n");
}
