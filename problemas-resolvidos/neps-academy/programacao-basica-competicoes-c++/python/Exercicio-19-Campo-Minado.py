n = int(input())
lista = []
saida = []

for i in range(0,n):
    lista.append(int(input()))
lista.append(0)
    
for i in range(0,n):
    qtde = 0
    if (i == 0):
        qtde = qtde + lista[i]
        qtde = qtde + lista[i+1] 
    elif (i < n):
        qtde = qtde + lista[i]
        qtde = qtde + lista[i+1]
        qtde = qtde + lista[i-1]
    print(qtde)