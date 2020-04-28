#include <stdio.h>

#include "utils.h"


int* replaceElements(int* arr, int arrSize, int* returnSize) {
  *returnSize = arrSize;
  int max_val = arr[arrSize - 1];
  for (int i = arrSize - 2; i >= 0; i--) {
    int temp = arr[i];
    arr[i] = max_val;
    max_val = max_val > temp ? max_val : temp;
  }
  arr[arrSize - 1] = -1;
  return arr;
}

void main() {
  int a[] = {17, 18, 5, 4, 6, 1};
  int len = sizeof(a) / 4;
  int b = 0;
  replaceElements(a, len, &b);
  ppa(a, len);
}