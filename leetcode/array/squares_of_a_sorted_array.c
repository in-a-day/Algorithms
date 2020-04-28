#include <math.h>
#include <stdio.h>
#include "utils.h"

int *sortedSquares(int *A, int ASize, int *returnSize)
{
    int res[ASize];
    *returnSize = ASize;
    // 双指针
    int left = 0, right = ASize - 1;
    for (int i = ASize - 1; i >= 0; i--)
    {
        if (abs(A[left]) > abs(A[right]))
        {
            res[i] = A[left] * A[left];
            left++;
        }
        else
        {
            res[i] = A[right] * A[right];
            right--;
        }
    }
    for (int j = 0; j < ASize; j++)
    {
        A[j] = res[j];
    }
    return A;
}

void main()
{
    int a[] = {-4, -1, 0, 3, 10};
    int c;
    sortedSquares(a, sizeof(a) / 4, &c);
    for (int i = 0; i < sizeof(a) / 4; i++)
    {
        printf("%d \n", a[i]);
    }
    ppa(a, sizeof(a) / 4);
}