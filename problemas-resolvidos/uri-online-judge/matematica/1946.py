from decimal import Decimal

def binomialCoef(n, k): 
    m = 0
    if k == 0:
        m = 1
    if k == 1:
        m = n
    if k >= 2:
        num, dem, op1, op2=1, 1, k, n
        while(op1 >= 1):
            num *= op2
            dem *= op1
            op1 -= 1
            op2 -= 1
        m = num//dem
    return m

n = int(input())

total = 1 << (n - 1)
coef = binomialCoef(n - 1, n // 2)

x = Decimal(coef * 100 / total)

print(round(x, 2))