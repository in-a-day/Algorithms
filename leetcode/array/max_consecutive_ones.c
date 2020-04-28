#include <stdio.h>

int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    if (numsSize < 1)
        return 0;
    int res = 0, max = 0;
    for (int i = 0; i < numsSize; i++)
    {
        max = nums[i] == 0 ? 0 : ++max;
        res = res > max ? res : max;
    }
    return res;
}

void main()
{
    int n[6] = {0, 0, 0, 0};
    printf("%d", findMaxConsecutiveOnes(n, 4));
}