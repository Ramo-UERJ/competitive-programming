import math
n = int(input())

lista = [float(x) for x in input().split()]

for num in lista:
    print('%.4f'%(math.sqrt(num)))
