def binary_search_rec(vet, num, esq, dir):
	meio = (esq + dir) // 2
	aux_num = vet[meio]
	if num == aux_num:
		return meio
	elif num > aux_num:
		return binary_search_rec(vet, num, meio-1, dir)
	return binary_search_rec(vet, num, esq, meio+1,)

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

vetor = [16]
cont = 0
while cont<15:
    entrada = int(input("Digite a entrada: "))
    vetor.insert(cont, entrada)
    cont+=1

vetor = bubble_sort(vetor)

busca = int(input("Qual numero voce quer procurar? "))

pv = binary_search_rec(vetor, busca, 0, 15)

print("A posicao do valor {} no vetor eh: {}".format(busca, pv))

