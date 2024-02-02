class Solution:
    def isThree(self, n: int) -> bool:
        divisors = 0

        for i in range(n, 0, -1):
            if n % i == 0:
                divisors += 1
        
        if divisors == 3:
            return True

        return False