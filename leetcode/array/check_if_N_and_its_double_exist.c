#include <stdbool.h>
#include <stdio.h>

#include "utils.h"

// 使用hashtable降低时间复杂度
bool checkIfExist(int *arr, int arrSize) {
  for (int i = 0; i < arrSize; i++) {
    for (int j = i + 1; j < arrSize; j++) {
      if (arr[j] == arr[i] * 2 || ((arr[i] & 1) == 0 && arr[j] == arr[i] / 2))
        return true;
    }
  }
  return false;
}

void main() {
  int a[] = {3, 3, 2, 11};
  int len = sizeof(a) / 4;
  pp(checkIfExist(a, len));
}
