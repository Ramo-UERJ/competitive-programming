num = int(input())

lista = [int(x) for x in input().split()]
mov = 0
aux = []

for i in range(0,num):
    aux.append(lista[i])

aux.sort()
tam = []
for i in range(0,num):
    if aux[i] != lista[i]:
        tam.append(lista[i])
        mov = mov + 1
tam.sort()
print(mov)
for i in tam:
    print(i,end=" ")
