#include<stdio.h>
#include<stdlib.h>

struct dados
{
    int info;
};

typedef struct dados Data;

struct node
{
    Data elem;
    struct node *prox;
};

typedef struct node LADAE;

LADAE** criaLADAE();

int ehVaziaLADAE(LADAE **inicio);

int insereInicioLADAE(LADAE **inicio, Data novo);

void imprimeLADAE(LADAE **inicio);

void liberaLADAE(LADAE **inicio);

