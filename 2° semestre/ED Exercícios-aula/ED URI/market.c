#include<stdio.h>
#include<stdlib.h>

struct dados{
    int Nitens;
    char produtos;
    double preco;
};typedef struct dados Data;

struct node{
    Data elem;
    struct node *prox;
};typedef struct node LADAE;


LADAE** criaInicalizaLADAE(){
    LADAE **novo;
                        /*    ou LADAE*    */
    novo = (LADAE**)malloc(sizeof(LADAE));

    *novo = NULL; /*inicializa*/
    return novo;
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
int main(){
    int viagens,i,j,flag=0,contador;
    Data aux;
    LADAE **lista;
    
    lista = criaInicalizaLADAE();

    printf("numero de viagens");
    scanf("%d",&viagens);

    for(i=0;i<viagens;i++){


        printf("numero de itens");
        scanf("%d",&aux.Nitens);
  
        for(j=0;j<aux.Nitens;j++){
            printf("item e preco\n");
            getchar();
            scanf(" %s %lf",&aux.produtos,&aux.preco);
            contador = buscarElemento(lista,aux.produtos);
            if(contador > -1){
                
             }
            flag++;

            printf("flag = %d",flag);
        }
    }
    return 0;
}