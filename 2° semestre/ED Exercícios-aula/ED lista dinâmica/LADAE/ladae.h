#include<stdio.h>
#include<stdlib.h>

#ifdef _WIN32               
	#define CLEAR "cls"
#else
	#define CLEAR "clear"
#endif

struct dados{
    int info;
};typedef struct dados Data;

struct node{
    Data elem;
    struct node *prox;
};typedef struct node LADAE;

LADAE** criaInicalizaLADAE();
int ehVaziaLADAE(LADAE **inicio);
int inserirInicio(LADAE **inicio,Data novo);
int  inserirFinal(LADAE **inicio, Data novo);
void imprimeLADAE(LADAE **inicio);
int RemoveInicio(LADAE **inicio);
int RemoveFinal(LADAE **inicio);
int buscarElemento(LADAE **inicio,int velho);
void liberaLADAE(LADAE **inicio);
void ZerarLADAE(LADAE **inicio);
