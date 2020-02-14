#include"laeas.h"
#define MAX 5
void criarLAEAS(LAEAS *vetor){
    vetor->fim = -1; /*(*vetor).fim*/
}
int vCheia(LAEAS *vetor){
    if(vetor->fim == MAX-1){
        return 0;
    }
    else
        return 1;
}
int vVazia(LAEAS *vetor){
    if(vetor->fim == -1){
        return 0;
    }else 
        return 1;
}
int imprimirLAEAS(LAEAS *vetor){
    int i;
    if(vetor->fim != -1){
        for(i=0;i<=vetor->fim;i++){
            printf("[%d] ",vetor->elem[i]);
        }
    }else
        printf("A lista estah vazia\n");
}
int inserirInicio(LAEAS *vetor,int elemento){
    int j;
    if(vetor->fim != MAX-1){ /*verificar se estah cheia*/
        vetor->fim = vetor->fim+1;
        j = vetor->fim;
        while(j>=1){
            vetor->elem[j] = vetor->elem[j-1];
            j--;
        }
        vetor->elem[0] = elemento;
        return 0;
    }else 
        return 1;
}
int inserirFim(LAEAS *vetor, int elemento){
    if(vetor->fim != MAX-1){ /*verificar se estah cheia*/
    vetor->fim = vetor->fim + 1; /*incrementa a posicao final, o numero inserido passa a ser o da posicao final*/
    vetor->elem[vetor->fim] = elemento; /*insere o elemento*/
    return 0;
    }else
        return 1;
}
int removerInicio(LAEAS *vetor){
    int i=0;
    if(vetor->fim != -1){
        while(i < vetor->fim){
            vetor->elem[i] = vetor->elem[i+1]; /* o vetor 0 recebe o valor do vetor 1, assim sucessivamente */
            i++;
        }
        vetor->fim = vetor->fim-1;
        return 0;
    }else
        return 1;
}
int removerFim(LAEAS *vetor){
    if(vetor->fim != -1){
        vetor->fim = vetor->fim-1;
        return 0;
    }else
        return 1;
}
int limparLAEAS(LAEAS *vetor){
    if(vetor->fim != -1){
        vetor->fim = -1;
        return 0;
    }else
        return 1;

}
/*Se inserir elemento no inicio*/
/*Se a lista estiver cheia*/
/*if(lista->fim == MAX-1)
    return 1;
}else{
    lista->fim = lista->fim+1;
    j = lista->fim;
    while(j>=1){
        lista->array[j] = lista->array[j-1];
        j--;
    }
    lista->array[0] = elem;
    */