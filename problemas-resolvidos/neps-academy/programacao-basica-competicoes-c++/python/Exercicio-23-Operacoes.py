operacao = input()
a,b = map(float,input().split())

if operacao == 'M':
    print('%.2f'%(a*b))
else:
    print('%.2f'%(a/b))
