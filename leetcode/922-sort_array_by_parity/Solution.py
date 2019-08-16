class Solution:
    def sortArrayByParityII(self, A: List[int]) -> List[int]:
        # tiem: O(n), memory: O(n)
        res = [0] * len(A)
        i, j = 0, 1
        for k in A:
            if k & 1 == 0:
                res[i] = k
                i += 2
            else:
                res[j] = k
                j += 2
        
        # time: O(n), memory: O(1), 使用双指针

        return res