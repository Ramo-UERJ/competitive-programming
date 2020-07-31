n = int(input())

matriz = []
sumColuna = []
sumLinha = []
maior = -1

#recendo dados
for i in range(0,n):
    vet = []
    vet = [int(x) for x in input().split()]
    matriz.append(vet)

#somando linhas
for i in range(0,n):
    sumLinha.append(sum(matriz[i]))

#somando colunas
for i in range(0,n):
    temp = 0
    for j in range(0,n):
        temp = temp + matriz[j][i]
    sumColuna.append(temp)

#verificando quem e maior
for i in range(0,n):
    for j in range(0,n):
        soma = sumLinha[i] + sumColuna[j] - 2*matriz[i][j]
        if soma > maior:
            maior = soma
print(maior)
