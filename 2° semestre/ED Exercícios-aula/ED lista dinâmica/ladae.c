#include"ladae.h"
LADAE** criaInicalizaLADAE(){
    LADAE **novo;
                        /*    ou LADAE*    */
    novo = (LADAE**)malloc(sizeof(LADAE));

    *novo = NULL; /*inicializa*/
    return novo;
}
int ehVaziaLADAE(LADAE **inicio){
    if(*inicio==NULL)
        return 1;
    else
        return 0;
}
int inserirInicio(LADAE **inicio,Data novo){
        LADAE *novono;

        novono = (LADAE*) malloc(sizeof(LADAE));
        if(novono == NULL){
            return 0;
        }else{
            novono->prox = NULL;
            novono->elem = novo;
        }
        if(ehVaziaLADAE(inicio)){ /*ehVaziaLADAE(inicio)==1*/
            *inicio = novono;
        }else{
            novono->prox = *inicio;
            *inicio = novono;
        }
}
int inserirFinal(LADAE **inicio, Data novo){
    LADAE *aux = *inicio;
    LADAE *anterior = NULL;
    LADAE *novono;
    novono = (LADAE*)malloc(sizeof(LADAE));
    if(novono ==NULL){
        return 0;
    }else{
        novono->elem = novo;
        novono->prox = NULL;

        if(*inicio ==NULL){
            *inicio = novono;
        }else{
            while(aux != NULL){
                anterior = aux;
                aux = aux->prox;
            }
            anterior->prox = novono;
        }
    }
}
void imprimeLADAE(LADAE **inicio){
    LADAE *aux;
    aux = *inicio;

    printf("\n\nLADAE:\n");

    if(aux ==NULL){
        printf("Lista vazia\n");
    }else{
        while(aux != NULL){
            printf("[%d]",(aux->elem).info);
            aux = aux->prox;
        }
    }
    printf("\n\n\n");
}
int RemoveInicio(LADAE **inicio){
    LADAE *aux;
    aux = *inicio;
    if(*inicio==NULL){
        printf("A lista estah vazia!");
        return 0;
    }else{
        *inicio = aux->prox;
        return 1;
    }
}
int RemoveFinal(LADAE **inicio){
    LADAE *aux, *ant;

    /*Pega o endereço do primeiro nó*/
    aux = *inicio;

    if(*inicio ==NULL){ /*essa condição é executada logo após a execução da próxima condição, se o usuário quiser remover de novo um elemento */
        printf("A lista estah vazia!!!");
        return 0;
    }
    /*a lista tem só um elemento*/
    if(aux->prox ==NULL){
        *inicio = NULL;
        return 0;
    }else{
        ant = aux;
        aux = aux->prox;
        while(aux->prox != NULL){
            ant = aux;
            aux = aux->prox;
        }
    ant->prox = NULL;
}
free(aux);
}
int buscarElemento(LADAE **inicio,int velho){
    int cont=0;
    LADAE *aux;
    aux = *inicio;
    while (aux != NULL){
        if(((aux->elem).info) == velho){
            return cont;
    }
    aux = aux->prox;
    cont++;
    }
    return -1;
}
void liberaLADAE(LADAE **inicio){
    LADAE *aux,*liberar;
    aux = *inicio;

    while(aux != NULL){ /*enquanto lista for válida*/
        liberar = aux;
        aux = aux->prox;
        free(liberar); /*libera o antigo inicio*/
    }
    free(inicio);
    aux = NULL;
}


