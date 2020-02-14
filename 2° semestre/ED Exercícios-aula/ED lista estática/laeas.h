#include<stdio.h>
#include<stdlib.h>
#define MAX 5

#ifdef _WIN32               
	#define CLEAR "cls"
#else
	#define CLEAR "clear"
#endif

struct lista{
    int fim; /*indice*/
    int elem[MAX];/*numero de elementos do vetor*/
};typedef struct lista LAEAS;

void criarLAEAS(LAEAS *vetor);
int vCheia(LAEAS *vetor);
int vVazia(LAEAS *vetor);
int imprimirLAEAS(LAEAS *vetor);
int inserirInicio(LAEAS *vetor,int elemento);
int inserirFim(LAEAS *vetor,int elemento);
int removerInicio(LAEAS *vetor);
int removerFim(LAEAS *vetor);
/*int buscarElemnto();*/
int limparLAEAS(LAEAS *vetor);