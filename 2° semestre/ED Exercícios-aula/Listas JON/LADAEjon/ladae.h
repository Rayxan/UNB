#include<stdio.h>
#include<stdlib.h>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

struct dados{
    int info;
};

typedef struct dados Data;

struct node{
    Data elem;
    struct node *prox;
};

typedef struct node LADAE;

LADAE** criaInicializaLADAE();

int ehVaziaLADAE(LADAE **inicio);

int insereInicioLADAE(LADAE **inicio, Data novo);

int insereFinalLADAE(LADAE **inicio,Data novo);

int removerInicioLADAE(LADAE **inicio);

int removerFinalLADAE(LADAE **inicio);

void imprimeLADAE(LADAE **inicio);

void liberaLADAE(LADAE **inicio);

int buscarLADAE(LADAE **lista,int num);

