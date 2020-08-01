class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        r = x ^ y
        return self.__count_bits(r)
    
    def __count_bits(self, n: int) -> int:
        count = 0
        while n != 0:
            n = n & (n-1)
            count += 1
        return count