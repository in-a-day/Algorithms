from typing import List
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res, _append = [], [1]
        for i in range(numRows):
            res.append(_append)
            _append = [1] + [_append[j] + _append[j + 1] for j in range(len(_append) - 1)] + [1]
        return res

if __name__ == "__main__":
    s = Solution()
    print(s.generate(2))
