def bubble_sort(lista):
    elementos = len(lista)-1
    ordenado = False
    while not ordenado:
        ordenado = True
        for i in range(elementos):
            if lista[i] > lista[i+1]:
                lista[i], lista[i+1] = lista[i+1],lista[i]
                ordenado = False
    return lista

qtd = 0
vetor=[]
vetor2=[1000]
entrada = 0
flag = 1
flag2 = 0

while entrada!=11:
    entrada = float(input("Digite a entrada: "))
    if entrada==11:
        break
    else:
        qtd+=1
        vetor.append(qtd)
        vetor.insert(qtd, entrada)

vetor = bubble_sort(vetor)

if qtd % 2 == 0:
    qtd = qtd/2
    resultado = (vetor[qtd]+vetor[qtd+1])/2
    print("\nO conjunto eh par.\nMediana: {}".format(resultado))
else:
    qtd/2
    qtd+=1
    resultado = vetor[qtd]
    print("\nO conjunto eh impar.\nMediana: {}".format(resultado))