#include <stdio.h>
#include "utils.h"

// 直接保留不是val的元素
int solution(int *nums, int numsSize, int val)
{
    if (numsSize == 0)
        return 0;
    int curr = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
            nums[curr++] = nums[i];
    }
    return curr;
}

// 正向理解, 交换元素
int removeElement(int *nums, int numsSize, int val)
{
    int i = 0, j = numsSize - 1, count = 0;
    while (i <= j)
    {
        if (nums[i] == val)
        {
            if (nums[j] != val)
            {
                int temp = nums[i];
                nums[i++] = nums[j];
                nums[j] = temp;
            }
            j--;
            count++;
        }
        else
        {
            i++;
        }
    }
    return numsSize - count;
}

void main()
{
    int a[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int len = sizeof(a) / 4;
    int val = 2;
    pp(removeElement(a, len, val));
    ppa(a, len);
}