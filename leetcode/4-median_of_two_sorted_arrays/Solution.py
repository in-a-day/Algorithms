class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        max_len = len(nums1) if len(nums1) > len(nums2) else len(nums2)
        a = []