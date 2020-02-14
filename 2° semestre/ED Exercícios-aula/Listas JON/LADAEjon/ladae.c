#include"ladae.h"

LADAE** criaInicializaLADAE()
{
    LADAE **novo;

    novo = (LADAE **) malloc(sizeof(LADAE *));

    *novo = NULL;

    return novo;
}

int ehVaziaLADAE(LADAE **inicio)
{
    if(*inicio == NULL)
        return 1;
    return 0;
}

int insereInicioLADAE(LADAE **inicio, Data novo){

    LADAE *novono;

    novono = (LADAE *) malloc(sizeof(LADAE));
    if (inicio==NULL){
        return 0;

    }
    if(novono == NULL)
        return 0;
    
    novono->prox = NULL;
    novono->elem = novo;
    
    if(*inicio == NULL){
        *inicio = novono;
    }
    else{
        novono->prox = *inicio;
        *inicio = novono;
    }

    return 1;
}

int insereFinalLADAE(LADAE **inicio,Data novo){
    LADAE *novono;

    novono = (LADAE *) malloc(sizeof(LADAE));
    if(novono == NULL)
        return 0;

    novono->prox = NULL;
    novono->elem = novo;

    if(ehVaziaLADAE(inicio)){
        *inicio = novono;
    }
    else{
        LADAE *aux;
        aux=*inicio;
        while(aux->prox!=NULL){
            aux=aux->prox;
        }
        aux->prox=novono;
    }

    return 1;
}

int removerInicioLADAE(LADAE **inicio){

    if(*inicio == NULL)
        return 0;

    LADAE *No;
    No = *inicio;
    *inicio = No->prox;
    free(No);
    return 1;

}

int removerFinalLADAE(LADAE **inicio){
  
    if(*inicio == NULL)
        return 0;

    LADAE *ant,*no;
    no = *inicio;

    while(no->prox != NULL){
        ant = no;
        no = no->prox;
    }

    if(no == *inicio){
        *inicio = NULL;
    }
    else{
        ant->prox=no->prox;
        free(no);

    }
    return 1;
}


void imprimeLADAE(LADAE **inicio)
{
    LADAE *aux;
    aux = *inicio;
     
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
    printf("\n");
}


void liberaLADAE(LADAE **inicio){
    LADAE *aux,*liberar;
    aux = *inicio;    
    
    while(aux!=NULL){
        liberar = aux;
        aux=aux->prox;
        free(liberar);
    }

    free(inicio);
    inicio = NULL;
}

int buscarLADAE(LADAE **inicio, int num){
    int j=1;
    LADAE *aux;
    aux = *inicio;
    while(aux != NULL){
        if((aux->elem).info == num){
            return j;
        }
        aux = aux->prox;
        j++;
    }

    return -1;
}



