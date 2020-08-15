n = int(input())

while n > 0:
    l = [int(x) for x in input().split()]
    a = sorted(l[3:])
    b = sorted(l[:3])

    res = 0
    if (a[2] > b[1] and a[1] > b[0]):
        res += 1
    
    if (b[2] > a[1] and b[1] > a[0]):
        res += 2

    print(res)
    n -= 1