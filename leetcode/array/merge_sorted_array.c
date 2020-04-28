#include <stdio.h>
#include "utils.h"

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int i, j, k;
    i = m - 1;
    j = n - 1;
    k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
            nums1[k--] = nums1[i--];
        else
            nums1[k--] = nums2[j--];
    }
    while (j >= 0)
    {
        nums1[k--] = nums2[j--];
    }
}

void main()
{
    int a[] = {1, 2, 3, 0, 0, 0};
    int m = 3;
    int len_a = sizeof(a) / 4;
    int b[] = {2, 5, 6};
    int n = 3;
    int len_b = sizeof(b) / 4;
    merge(a, len_a, m, b, len_b, n);
    ppa(a, len_a);
}