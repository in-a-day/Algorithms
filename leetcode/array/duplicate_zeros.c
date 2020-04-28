#include <stdio.h>
#include "utils.h"

void move_item(int *, int, int);

void duplicateZeros(int *arr, int arrSize)
{
    for (int i = 0; i < arrSize - 1;)
    {
        if (arr[i] == 0)
        {
            move_item(arr, ++i, arrSize - 1);
        }
        i++;
    }
}

// 向后移位, 并将start置为0
void move_item(int *a, int start, int end)
{
    for (; end > start; end--)
    {
        a[end] = a[end - 1];
    }
    a[start] = 0;
}

void main()
{
    int a[7] = {0, 0, 0, 0, 0, 0, 0};
    int len = sizeof(a) / 4;
    duplicateZeros(a, len);
    ppa(a, len);
}
