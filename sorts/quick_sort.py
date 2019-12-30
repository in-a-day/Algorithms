"""
分治法
divide and conquer, D&C
"""
from collections import deque
def quick_sort(lst: list):
    '''接收数组, 返回排序好的数组'''
    if len(lst) < 2:
        return lst
    pivot = lst[0]
    less = [i for i in lst[1:] if i <= pivot]
    greater = [i for i in lst[1:] if i > pivot]

    return quick_sort(less) + [pivot] + quick_sort(greater)

if __name__ == "__main__":
    print(quick_sort([1, 6, 3, 4, 2, 7, 4]))
