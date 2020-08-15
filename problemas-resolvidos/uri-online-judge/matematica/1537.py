MOD = 1000000009
f = [0] * 100002

# f(3) = 1
# f(4) = 4 * f(3)
# f(5) = 5 * f(4) = 5 * 4 * f(3)
# f(n) = n * f(n - 1) --> recursao

f[3] = 1

for i in range(4, 100001):
    f[i] = i * f[i - 1] % MOD

while True:
    n = int(input())
    if n == 0:
        break
    
    print(f[n])
