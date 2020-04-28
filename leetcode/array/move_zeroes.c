#include <stdio.h>

#include "utils.h"

void moveZeroes(int *nums, int numsSize) {
  for (int i = 0, j = 1; j < numsSize; j++) {
    if (nums[i] == 0 && nums[j] != 0) {
      nums[i] = nums[j];
      nums[j] = 0;
    }
    if (!(nums[i] == 0 && nums[j] == 0)) i++;
  }
}

void main() {
  int a[] = {0, 1, 0, 3, 12};
  int len = sizeof(a) / 4;
  moveZeroes(a, len);
  ppa(a, len);
}
