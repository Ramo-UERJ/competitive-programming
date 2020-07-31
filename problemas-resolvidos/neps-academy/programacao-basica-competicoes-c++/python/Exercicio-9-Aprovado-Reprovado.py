a,b = map(float,input().split())
media = (a + b) / 2
if (media >= 7):
    print("Aprovado")
elif ((media >= 4) and (media < 7)):
    print("Recuperacao")
elif (media < 4):
    print("Reprovado")
