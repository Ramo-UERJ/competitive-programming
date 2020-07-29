# Entrada e saída de dados

A **entrada** de dados pode ser feita pela leitura de um arquivo ou pelo usuário. Para pedir um dado para o usuário é usado o comando input(). Para fazer a leitura de uma frase digitada por ele e armazena-lá em uma variável (f) utiliza-se a seguinte sintaxe.
#### Exemplo: 
```python
f = input("Digite uma frase: ")
```
Já para armazenar um número inteiro ou real a sintaxe é a seguinte:
```python
i = int(input("Digite uma idade: ")) #numero inteiro
h = float(input("Digite uma altura: ")) #numero real
```
O que está entre parênteses é a mensagem exibida para o usuário. Por padrão o input() armazena o conteúdo digitado pelo usuário em uma variável do tipo string. Para armazenar valores numéricos é necessário converter para inteiro (int) ou real (float) o conteúdo recebido pelo input().

Para **saída** de dados é usado o comando print como no exemplo abaixo:
```python
print("Olá mundo")
idade = int(input("Digite a idade da pessoa: "))
print ("A idade da pessoa e",idade)
altura = float(input("Digite a altura da pessoa: "))
print ("A idade da pessoa e",idade,"e a altura e", altura)
```
Por padrão o print quebra linha. Para escrever em uma única linha é utilizado um argumento end no comando print. O que está dentro do parênteses será o carácter que irá separar o conteúdo. No exemplo abaixo foi utilizado espaço.
```python
for i in range(0,10):
	print(i,end=" ") 
```
Mas poderia ser um hífen
```python
for i in range(0,10):
	print(i,end="-") 
```
## Entrada de dados nas competições

Nas competições as entradas geralmente são feitas em uma única linha ou em mais linhas. Elas podem ter um ou mais números e carácteres. Para armazenar a idade de duas pessoas que foram digitadas em uma única linha e estão separadas por espaço é utilizado o comando map. No qual o primeiro argumento do map é passado o comando que será aplicado na lista que estará no segundo argumento.
### Exemplo:
```python
#entrada
#10 20
idade_1, idade_2 = map(int,input().split())
print(idade_1,idade_2)
```
Caso a linha tenha **n** números separados por espaço, será inviável trabalhar com map. Neste caso, será utilizado uma lista para armazenar os números, no qual, cada posição da lista conterá um número.
### Exemplo:
```python
#entrada
#1 2 3 4 5 6 7 8 9 10 ... n
lista = [int(x) for x in input().split()]
```
Se o conteúdo da entrada estiver no formato de matriz, será necessário armazenar em uma matriz. Em Python, matriz é uma lista de listas. Portanto, a sintaxe para armazenar a informação em uma matriz 3x3 será a seguinte.
### Exemplo:
```python
#entrada
#1 2 3 
#4 5 6 
#7 8 9
matriz = []
for i in range(0,3):
    vet = []
    vet = [int(x) for x in input().split()]
    matriz.append(vet)
```

