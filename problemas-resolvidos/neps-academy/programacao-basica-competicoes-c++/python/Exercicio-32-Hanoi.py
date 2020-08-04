n = int(input())
resposta = []
while (n != 0):
    resposta.append((2**n)-1)
    n = int(input())

for i in range(0,len(resposta)):
    print("Teste",i+1)
    print(resposta[i])
    print()
    
