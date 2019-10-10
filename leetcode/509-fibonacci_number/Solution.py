class Solution:
    def fib(self, N:int) -> int:
        N -= 1
        a, b = 0, 1
        while N:
            a, b = b, a + b
            N -= 1
        return a
    def dig_pow(self, n, p):
        # your code
        sum = 0
        for v in str(n):
            sum += int(v)**p
            p += 1
        return (sum // n) if sum % n == 0 else -1


if __name__ == "__main__":
    s = Solution()
    print(s.fib(4))
    print(s.dig_pow(46288, 3))