#include <stdio.h>

#include "utils.h"

int isEven(int a) { return !(a & 1); }

void swap(int* a, int* b) {
  int tmep = *a;
  *a = *b;
  *b = tmep;
}

int* sortArrayByParity(int* A, int ASize, int* returnSize) {
  *returnSize = ASize;
  for (int i = 0, j = ASize - 1; i < j;) {
    if (!isEven(A[i]) && isEven(A[j])) swap(A + i, A + j);
    if (isEven(A[i])) i++;
    if (!isEven(A[j])) j--;
  }
  return A;
}

int main() {
  int a[] = {3, 1, 2, 4, 1};
  int len = sizeof(a) / 4;
  int b = 0;
  sortArrayByParity(a, len, &b);
  ppa(a, len);
  return 0;
}