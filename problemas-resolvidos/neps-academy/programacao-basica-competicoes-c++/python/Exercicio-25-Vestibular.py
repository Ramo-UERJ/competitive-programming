n = int(input())
gabarito = input()
aluno = input()
ponto = 0

for i in range(0,n):
    if gabarito[i] == aluno[i]:
        ponto = ponto + 1
print(ponto)
