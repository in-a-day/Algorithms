#include <stdio.h>

#include "utils.h"

// 计数排序
int heightChecker(int* heights, int heightsSize) {
  int a[101] = {};
  for (int i = 0; i < heightsSize; i++) a[heights[i]]++;
  int res = 0, heigh_ptr = 1;
  for (int j = 0; j < heightsSize; j++) {
    while (a[heigh_ptr] == 0) heigh_ptr++;
    if (heigh_ptr != heights[j]) res++;
    a[heigh_ptr]--;
  }
  return res;
}

int main() {
  int a[] = {1, 1, 3};
  int len = sizeof(a) / 4;
  pp(heightChecker(a, len));
  return 0;
}