#include <stdio.h>
#include "utils.h"

int removeDuplicates(int *nums, int numsSize)
{
    if (numsSize == 0)
    {
        return 0;
    }

    int curr = 0;
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[curr])
        {
            nums[++curr] = nums[i];
        }
    }

    return curr + 1;
}

void main()
{
    int a[] = {};
    int len = sizeof(a) / 4;
    pp(removeDuplicates(a, len));
    ppa(a, len);
}
