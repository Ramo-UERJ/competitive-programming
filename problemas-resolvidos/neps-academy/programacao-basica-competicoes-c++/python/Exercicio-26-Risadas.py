risada = input()

vet_vogal = ['a','e','i','o','u']
palavra = ''

for i in range(0,len(risada)):
    if (risada[i] in vet_vogal):
        palavra = palavra + risada[i]

cont = 0
j = len(palavra)-1
for i in range(0,len(palavra)//2+1):
    if (palavra[i] == palavra[j]):
        cont = cont + 1
    j = j - 1
        
if (cont == len(palavra)//2+1):
    print("S")
else:
    print("N")
