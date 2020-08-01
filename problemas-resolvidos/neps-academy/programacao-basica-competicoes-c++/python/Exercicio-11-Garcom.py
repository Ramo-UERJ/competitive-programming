n = int(input())
qtde = 0

for i in range(0,n):
    l,c = map(int,input().split())
    if (l > c):
        qtde = qtde + c
print(qtde)
