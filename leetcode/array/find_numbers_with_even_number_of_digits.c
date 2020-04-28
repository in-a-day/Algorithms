#include <stdio.h>

int findNumbers(int *nums, int numsSize)
{
    int res = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int j = nums[i], count = 0;
        while (j)
        {
            j /= 10;
            if (count != 0)
                count++;
            else
                count--;
        }
        res += count + 1;
    }
    return res;
}

void pp(int a) {
    printf("%d", a);
}

void main()
{
    int a[] = {0, 345, 2, 6, 7896};
    pp(findNumbers(a, sizeof(a)/4));
}
