n = int(input())
lista = input().split()

if lista[1] == '+':
    soma = int(lista[0]) + int(lista[2])
else:
    soma = int(lista[0]) * int(lista[2])

if soma <= n:
    print("OK")
else:
    print("OVERFLOW")
