n = int(input())

vet = [0]*10
num = []

for i in range(0,n):
    num.append(input())


for i in range(0,n):
    for j in range(0,len(num[i])):
        vet[int(num[i][j])] = vet[int(num[i][j])] + 1

for i in range(0,len(vet)):
    print(i,"-",vet[i])
                   
