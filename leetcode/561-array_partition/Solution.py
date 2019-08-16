class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        # return sum(j for i, j in enumerate(sorted(nums)) if i & 1 == 0)
        return sum(sorted(nums)[::2])