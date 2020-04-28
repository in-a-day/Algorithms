#include <stdbool.h>
#include <stdio.h>

#include "utils.h"

bool validMountainArray(int* A, int ASize) {
  int max_index = -1;

  for (int i = 0; i < ASize; i++) {
    // 最大值在尾部, false
    if (i == ASize - 1 && max_index == -1) return false;
    if (max_index != -1) {
      // 最大值在首部或最大值后不是递减false
      if (max_index == 0 || A[i] >= A[i - 1]) {
        return false;
      }
    }
    // 第一次最大值出现的索引
    if (max_index == -1 && A[i] >= A[i + 1]) {
      max_index = i;
    }
  }

  return true;
}

void main() {
  int a[] = {0,2,6};
  int len = sizeof(a) / 4;
  pp(validMountainArray(a, len));
}