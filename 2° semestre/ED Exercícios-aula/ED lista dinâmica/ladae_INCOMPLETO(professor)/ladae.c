#include"ladae.h"

LADAE** criaLADAE()
{
    LADAE **novo;

    novo = (LADAE **) malloc(sizeof(LADAE *));

    return novo;
}

int ehVaziaLADAE(LADAE **inicio){
    if(*inicio == NULL)
        return 1;
    return 0;
}
int insereInicioLADAE(LADAE **inicio, Data novo)
{
    LADAE *novono;
    
    novono = (LADAE *) malloc(sizeof(LADAE));
    if(novono == NULL)
        return 0;
    
    novono->prox = NULL;
    novono->elem = novo;
    
    if(ehVaziaLADAE(inicio))
    {
        *inicio = novono;
    }
    else
    {
        novono->prox = *inicio;
        *inicio = novono;
        /* .. faco outra coisa */
    }
    return 1;
}

void imprimeLADAE(LADAE **inicio)
{
    LADAE *aux;
    aux = *inicio;
    
    printf("\n\n\t\t\tImprime lista\n");
    
    
    if(aux == NULL)
    {
        printf("Lista vazia\n");
    }
    else
    {
        while(aux != NULL)
        {
            printf("%d => ",(aux->elem).info);
            aux = aux->prox;
        }
    }
    printf("\n\n\n");
}

void liberaLADAE(LADAE **inicio)
{
    LADAE *aux,*liberar;
    aux = *inicio;    
    
    while(aux!=NULL)
    {
        liberar = aux;
        free(liberar);
        aux=aux->prox;
    }
    free(inicio);
    inicio = NULL;
}



