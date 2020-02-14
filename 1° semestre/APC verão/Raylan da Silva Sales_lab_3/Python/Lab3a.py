ENTRADAS = 10
PESOS = 10
for  i in range(0, 10):
    ENTRADA = float (input("Digite um valor de entrada: "))
    PESOS = float(input("Digite o valor do peso: "))
T = float(input("Digite o valor de T: "))

def fneuronio(ENTRADAS, PESOS, T):
    SOMAP = 0
    for i in range(0, 10):
        SOMAP += (ENTRADAS+1) * (PESOS+1)
    if SOMAP > T:
        return 1
    else:
        return 0

resultado = fneuronio(ENTRADAS,PESOS,T)
if(resultado == 1):
    print('Neuronio ativado!')
else:
    print('Neuronio inibido!')    
