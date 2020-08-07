arr = []
n = int(input())
while n != 0:
    for i in range(n):
        entrada = list(map(int, input().split()))
        arr.append(entrada[1] // 2)
        result = sum(arr)
        if (result % 2) != 0:
            result -= 1
        
    print(int(result / 2))
    n = int(input())
    arr = []
print()