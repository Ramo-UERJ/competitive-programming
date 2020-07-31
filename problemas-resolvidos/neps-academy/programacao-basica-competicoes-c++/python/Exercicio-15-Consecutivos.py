n = int(input())

lista = [int(x) for x in input().split()]
aux = lista[0]
qtde = 0
pontos = 0

for num in lista:
    if num == aux:
        qtde = qtde + 1
    else:
        if qtde > pontos:
            pontos = qtde
        qtde = 1
        aux = num
    
if qtde > pontos:
    print(qtde)
else:
    print(pontos)
