frase = input().split()

def maiuscula(s):
    saida = ''
    for i in s:
        temp = i.lower()
        saida = saida + temp.capitalize() + " "
    return (saida)

print(maiuscula(frase))
