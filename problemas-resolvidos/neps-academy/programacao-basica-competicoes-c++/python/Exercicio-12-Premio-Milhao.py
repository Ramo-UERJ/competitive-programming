n = int(input())
soma = 0
chegou = False

for i in range(0,n):
    a = int(input())
    soma = soma + a
    
    if ((soma >= 1000000) and (chegou == False)):
        dias = i + 1
        chegou = True
print(dias)
