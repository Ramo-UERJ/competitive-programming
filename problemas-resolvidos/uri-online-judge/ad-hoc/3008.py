
MAXN = 10010
MOD = 1000007
dp = [-1] * MAXN
dp[0] = 0
dp[1] = 0
dp[2] = 1
dp[3] = 1
dp[4] = 2
dp[5] = 5
dp[6] = 7
dp[7] = 12


def countPhosphor(n):
    if n < 0:
        return 0

    if dp[n] != -1:
        return dp[n]

    ans = 0

    for i in range(10):
        q = 0
        if i == 0:
            q = 6
        elif i == 1:
            q = 2
        elif i == 2:
            q = 5
        elif i == 3:
            q = 5
        elif i == 4:
            q = 4
        elif i == 5:
            q = 5
        elif i == 6:
            q = 6
        elif i == 7:
            q = 3
        elif i == 8:
            q = 7
        elif i == 9:
            q = 6
        ans += countPhosphor(n - q)
    
    dp[n] = ans
    return dp[n]

n = int(input())
while n > 0:
    p = int(input())
    print((countPhosphor(p) - countPhosphor(p - 6)) % MOD)
    n -= 1
