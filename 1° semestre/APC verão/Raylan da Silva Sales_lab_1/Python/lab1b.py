a = int(input("Digite um numero: "))
b = int(input("Digite outro numero: "))
c = int(input("Digite outro numero: "))
if a+b>c and a+c>b and b+c>a:
    if a==b and a==c and b==c:
        print('triangulo equilatero')
    elif a==b or a==c or b==c:
        print('triangulo isosceles')
    else:
        print('triangulo escaleno')
else:
    print('Nao eh um triangulo')
