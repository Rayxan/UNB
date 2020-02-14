prova = list(range(0,3))
trab = list(range(0,2))

arquivo = char (input('Digite o nome do arquivo: '))
arq = open(arquivo, 'r')
arq = open('media.txt', 'w')
Nalunos = num_al
for i in range(0, Nalunos):
    myStruct = {'mat': matricula, 'pv0': prova[0], 'pv1': prova[1], 'pv2': prova[2], 'tr0': trab[0], 'tr1':trab[1]}
    print (myStruct['mat'])
    print (myStruct['pv0'])
    print (myStruct['pv1'])
    print (myStruct['pv2'])
    print (myStruct['tr0'])
    print (myStruct['tr1'])
    
