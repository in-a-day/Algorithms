
from typing import List, Tuple, Dict, TextIO

class Solution:
    # 双指针解决
    def sortedSquares(self, A: List[int]) -> List[int]:
        len_A = len(A) - 1
        i, j, k = 0, len_A, len_A
        res = [0] * (len_A + 1)
        while k >=0:
            if A[i]**2 < A[j]**2:
                res[k] = A[j]**2
                j -= 1
            else:
                res[k] = A[i]**2
                i += 1
            k -= 1
        return A