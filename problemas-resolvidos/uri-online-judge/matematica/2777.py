MOD = 1000000007

dp = [-1] * MOD
dp[0] = 0
dp[1] = 1
dp[2] = 2
dp[3] = 2

# def compSubset(k):
#     if dp[k] != -1:
#         return dp[k]

#     dp[k] = compSubset(k - 2) + compSubset(k - 3)

#     return dp[k]

while True:
    try:
        n = int(input())
        # n %= MOD
        # x = compSubset(n)
        
        # print(x % MOD)

    except error:
        break
