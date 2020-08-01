numPaises, modalidades = map(int,input().split())

matriz = []

for i in range(0,modalidades):
    matriz.append([int(x) for x in input().split()])

#ouro = 10
#prata = 5
#bronze = 1
pontuacao = [0]*numPaises

#percorrendo por coluna
for i in range(0,3):
    for j in range(0,modalidades):
        indice = matriz[j][i]-1
        if i == 0:
            pontuacao[indice] = pontuacao[indice] + 1000
        elif i == 1:
            pontuacao[indice] = pontuacao[indice] + 20
        elif i == 2:
            pontuacao[indice] = pontuacao[indice] + 0.5

for i in range(0,numPaises):
    maior = max(pontuacao)
    indice = pontuacao.index(maior)
    print(indice+1,end=" ")
    pontuacao[indice] = -1
