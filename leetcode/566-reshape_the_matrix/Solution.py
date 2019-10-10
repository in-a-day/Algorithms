from typing import List
class Solution:
    def matrixReshape(self, nums: List[List[int]], r: int, c: int) -> List[List[int]]:
        if c * r != len(nums) * len(nums[0]):
            return nums
        nums = [j for i in nums for j in i]

        return [nums[i:i+c] for i in range(0, len(nums), c)]

if __name__ == "__main__":
    s = Solution()
    print(s.matrixReshape([[1,2],[3,4]], 1, 4))