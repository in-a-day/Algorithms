class Solution:
    def flipAndInvertImage(self, A: List[List[int]]) -> List[List[int]]:
        # 一行式, 用到了切片, 发生拷贝
        # return [[j ^ 1 for j in i[::-1]] for i in A]
        
        for i in A:
            while (j <= (len(A) >> 1) + 1):
                if (j == i[-1-j]):
                    j = i[-1-j] = 1 - j
        return A
