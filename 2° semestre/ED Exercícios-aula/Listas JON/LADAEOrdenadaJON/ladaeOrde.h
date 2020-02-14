#include <stdio.h>
#include <stdlib.h>

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

int insereLADAE(LADAE **inicio, Data novo);

int removerElementoLADAE(LADAE **inicio, int num);

void imprimeLADAE(LADAE **inicio);

void liberaLADAE(LADAE **inicio);

int buscarLADAE(LADAE **lista,int num);
