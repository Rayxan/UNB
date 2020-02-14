#include"ladaeOrde.h"

LADAE** criaInicializaLADAE(){
    LADAE **novo;

    novo = (LADAE **) malloc(sizeof(LADAE *));

    *novo = NULL;

    return novo;
}

int ehVaziaLADAE(LADAE **inicio){
    if(*inicio == NULL)
        return 1;
    return 0;
}

int insereLADAE(LADAE **inicio, Data novo){
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
    	LADAE *aux,*ant;
    	aux = *inicio;
    	while(aux != NULL && (aux->elem).info < novo.info){
    		ant = aux;
        	aux = aux->prox;
    	}
    	if(aux == *inicio){
			novono->prox = *inicio;
        	*inicio = novono;    		
    	}
    	else{
    		novono->prox = ant->prox;
    		ant->prox = novono; 
    	}
    }

}

int removerElementoLADAE(LADAE **inicio, int num){
  
    if(*inicio == NULL)
        return 0;

    LADAE *ant,*no;
    no = *inicio;

    while(no != NULL && (no->elem).info != num){
    		ant = no;
        	no = no->prox;
    }

    if(no == NULL){
    	printf("Elemento não encontrado\n");
    	return 0;
    }

    if(no == *inicio){
        no = *inicio;
    	*inicio =no->prox;
    	free(no);
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
     
    if(aux == NULL){
        printf("Lista vazia\n");
    }
    else{

        while(aux != NULL){
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


