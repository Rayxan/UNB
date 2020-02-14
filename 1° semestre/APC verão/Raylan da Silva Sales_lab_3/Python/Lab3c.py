from dataclasses import dataclass
class cadastro:
    nome: ' '
    matricula = None
    notas = None
    trab = None

cad = cadasto()
arquivo = char input('digite o nome do arquivo: '))
arq = open(arquivo, 'w')

num_al = int(input('digite o numero de alunos a serem cadastrados: '))
i = int(0)
for i in range (num_al):
    cad.nome = char(input('digite o nome do aluno: '))
    cad.matricula= []
    cad.nota= []
    cad.trab= []
    cad.matricula.append() = float('digite o numero de matricula: ')
    cad.nota.append() = float('digite a nota: ')
    cad.trab.append() = float('digite a nota: ')

arq.writelines(cad)
arq.close()