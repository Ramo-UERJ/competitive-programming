n = int(input())

matriz = []

for i in range(0,n):
    vet = []
    vet = [int(x) for x in input().split()]
    matriz.append(vet)

soma = sum(vet)


#diagonal principal
temp = 0
for i in range(0,n):
    temp = temp + matriz[i][i]

if soma != temp:
    print("-1")
    exit()

#diagonal segundaria
j = n - 1
temp = 0
for i in range(0,n):
    temp = temp + matriz[i][j]
    j = j - 1

if soma != temp:
    print("-1")
    exit()

#linha
for i in range(0,n):
    temp = sum(matriz[i])
    if soma != temp:
        print("-1")
        exit()

#coluna
for i in range(0,n):
    temp = 0
    for j in range(0,n):
        temp = temp + matriz[j][i]
    if soma != temp:
        print("-1")
        exit()
print(soma)



