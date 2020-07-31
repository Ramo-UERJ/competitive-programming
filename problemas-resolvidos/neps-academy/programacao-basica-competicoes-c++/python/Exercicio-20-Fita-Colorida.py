n = int(input())

lista = [int(x) for x in input().split()]

qtde = lista.count(0)

indice = []

for i in range(0,qtde):
    indice.append(lista.index(0))
    lista[indice[i]] = 2

for i in range(0,n):
    menor = 100000
    for j in range(0,len(indice)):
        temp = abs(i - indice[j])
        if(temp < menor):
            menor = temp
    if menor >= 9:
        print("9",end=" ")
    else:
        print(menor,end=" ")
