from typing import List
class Solution:
    def commonChars(self, A: List[str]) -> List[int]:
        arr = [0] * 26  # 记录26个字母
        for c in A[0]:
            arr[ord(c) - 97] += 1
        for words in A:
            arr1 = [0] * 26
            for ch in words:
                if arr[ord(ch) - 97] != 0:
                    arr1[ord(ch) - 97] += 1
            for i in range(26):
                arr[i] = min(arr[i], arr1[i])
        
        res = []
        for i in range(26):
            res.extend([chr(i + 97)] * arr[i])
        return res

    def commonChars(self, A: List[str]) -> List[int]:
        s = set(A[0])
        for i in A[1:]:
            s &= set(i)
        m = {}
        for j in s:
            m[j] = A[0].count(j)
        for words in A:
            for ch in s:
                m[ch] = min(words.count(ch), m.get(ch))
        
        res = []
        for ch in m:
            res.extend([ch] * m[ch])
        return res

if __name__ == "__main__":
    s = Solution()
    print(s.commonChars(["bella","label","roller"]))