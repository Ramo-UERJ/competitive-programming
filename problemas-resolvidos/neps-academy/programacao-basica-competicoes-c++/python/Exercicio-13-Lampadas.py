n = int(input())
A = False
B = False
lista = [int(x) for x in input().split()]

for i in lista:
    if i == 1:
        A = not A
    elif i == 2:
        A = not A
        B = not B

if A == False:
    print("0")
elif A == True:
    print("1")

if B == False:
    print("0")
elif B == True:
    print("1")
