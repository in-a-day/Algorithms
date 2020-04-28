#include <stdio.h>

#include "utils.h"

int thirdMax(int* nums, int numsSize) {
  int max_i, middle_i, min_i;
  max_i = middle_i = min_i = 0;
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] > nums[max_i]) {
      min_i = middle_i;
      middle_i = max_i;
      max_i = i;
    } 
    if (nums[i]> nums[middle_i] && nums[i] < nums[max_i]) {
      min_i = middle_i;
      middle_i = i;
    }
    if (nums[i] > nums[min_i] && nums[i] < nums[middle_i]) {
      min_i = i;
    }
    if (max_i == middle_i && nums[i] < nums[max_i]) {
      min_i = middle_i = i;
    }
    if (middle_i == min_i && nums[i] < nums[middle_i]) {
      min_i = i;
    }
  }
  return max_i == middle_i || middle_i == min_i ? nums[max_i] : nums[min_i];
}

int main() {
  int a[] = {0, 1, 1, 2};
  int len = sizeof(a) / 4;
  pp(thirdMax(a, len));
  return 0;
}