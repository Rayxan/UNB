#include<stdio.h>
#include<stdlib.h>

struct node
{
    int elem;
    struct node *prox;
};

typedef struct node Pilha;

Pilha** cria_Pilha()
{
    Pilha **nova;
    
    nova = (Pilha **) malloc (sizeof(Pilha *));

    *nova = NULL;

    return nova;
}

int ehVazia_Pilha(Pilha **topo)
{
    if(*topo == NULL)
        return 1;
    return 0;
}

int desempilha(Pilha **topo)
{
    Pilha *aux;
    
    if(ehVazia_Pilha(topo) == 1)
    {
        return 0;
    }
    else
    {
        aux = *topo;
        *topo = (*topo)->prox;
        free(aux);
    }
    return 1;
}

int empilha(Pilha **topo, int valor)
{
    Pilha *nodo;

    nodo = (Pilha *) malloc(sizeof(Pilha));
    nodo->elem = valor;
    nodo->prox = NULL;
    
    if(ehVazia_Pilha(topo) == 1)
    {
        *topo = nodo;
    }
    else
    {
        nodo->prox = *topo;
        *topo = nodo;
    }
    return 1;
}

void libera_Pilha(Pilha **topo)
{   
    while(ehVazia_Pilha(topo) == 0)
    {
        desempilha(topo);
    }
    free(topo);
    topo = NULL;
}

int verTopo(Pilha **topo)
{
    Pilha *aux = *topo;
    return aux->elem;
}

int main()
{
    Pilha **topo;
    
    topo = cria_Pilha();
    
    /* ... */
    
    libera_Pilha(topo);

    return 0;
}