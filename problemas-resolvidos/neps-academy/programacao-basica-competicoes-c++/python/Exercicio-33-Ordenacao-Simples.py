num = int(input())

lista = [int(x) for x in input().split()]

lista.sort()
for i in lista:
    print(i,end=" ")
