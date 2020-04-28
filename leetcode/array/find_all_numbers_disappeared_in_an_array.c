#include <malloc.h>
#include <math.h>
#include <stdio.h>

#include "utils.h"

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
  *returnSize = numsSize;
  for (int i = 0; i < numsSize; i++) {
    int m = abs(nums[i]) - 1;
    if (nums[m] > 0) {
      (*returnSize)--;
      nums[m] = -nums[m];
    }
  }
  int* res = (int*)malloc(*returnSize * sizeof(int));
  int count = 0;
  for (int j; j < numsSize; j++) {
    if (nums[j] > 0) res[count++] = j + 1;
  }
  return res;
}

int main() {
  int a[] = {4, 3, 2, 7, 8, 2, 3, 1};
  int len = sizeof(a) / 4;
  int b;
  int* c = findDisappearedNumbers(a, len, &b);
  ppa(c, b);
  return 0;
}