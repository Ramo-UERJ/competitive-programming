numGP, numPilotos = map(int,input().split()) # 3 10
resultado = []

while ((numGP != 0) and (numPilotos != 0)):
    
    colocacao = []

    for i in range(0,numGP):
        colocacao.append([int(x) for x in input().split()])

    numPontuacao = int(input()) # 2

    SistemaPontuacao = []

    pontos = []

    for i in range(0,numPontuacao):
        SistemaPontuacao.append([int(x) for x in input().split()])
        pontos.append([0]*numPilotos)


    # pontos: cada linha é um sistema de pontuacao. E cada coluna e a pontuacao do jogador onde o indice representa o seu id
    maximoSistema = []
    def InserirPontos(posicaoPiloto,qtde,sistema):
        #sistema indica a qtde de sistemas de pontuacoes
        
        for k in range(0,numGP):
            indicePiloto = colocacao[k].index(posicaoPiloto)        
            pontos[sistema][indicePiloto] = pontos[sistema][indicePiloto] + qtde


    for i in range(0,numPontuacao):
        for j in range(1,len(SistemaPontuacao[i])):
            InserirPontos(j,SistemaPontuacao[i][j],i)
    #preparando para imprimir resultado
    
    for i in range(0,len(pontos)):
        maior = max(pontos[i])
        aux = []
        for j in range(0,len(pontos[i])):
            if pontos[i][j] == maior:
                aux.append(j+1)
        resultado.append(aux)

    numGP, numPilotos = map(int,input().split())

#imprimindo resultado
for i in range(0,len(resultado)):
    for j in range(0,len(resultado[i])):
        print(resultado[i][j],end = " ")
    print()
