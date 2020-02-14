n1 = int(input("Digite um numero: "))
n2 = int(input("Digite outro numero: "))
n3 = int(input("Digite outro numero: "))
resto = ((n3*2)+(n2*3)+(n1*4))%11
resultado = 11 - resto
print ('Digito verificador: {}'.format(resultado))
