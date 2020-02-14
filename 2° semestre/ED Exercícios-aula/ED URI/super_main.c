#include"ladae.h"
#define SUCESSO 1
#define FALHA 0

int main(){
    int num=-1,criou=0,contador=0,Ebuscar;
    Data aux;

    /*Variável que armazena o endereço da lista*/
    LADAE **lista;
    LADAE *node;


    node = *lista; /* endereço do 1° nó da lista*/ /*dúvida sobre o uso dessa linha*/

    do{
        printf("\n\t\tMenu interativo\n\n");
        printf("(1) Criar e Inicializar LADAE\n");
        printf("(2) Inserir elemento no inicio\n");
        printf("(3) Inserir elemento no final\n");
        printf("(4) Remover elemento no inicio\n");
        printf("(5) Remover elemento no final\n");
        printf("(6) Buscar um elemento na LADAE\n");
        printf("(7) Limpar LADAE\n");
        printf("(8) Zerar LADAE\n");
        printf("(0) SAIR\n");
        printf("Digite sua opcao: ");
        scanf("%d",&num);
        system(CLEAR);

        if(num==1){
            /*cria endereço da lista*/
            lista = criaInicalizaLADAE();

            printf("Endereco do primeiro no da lista: %p\n",*lista);
            printf("Endereco da lista: %p\n",lista);

            printf("Lista LADAE inicializada com sucesso\n");
        criou = 1;
        }
        if(num==2){
            if(criou==1){
                printf("Digite um elemento:");
                scanf("%d",&aux.info);
            
                if(inserirInicio(lista,aux) == SUCESSO){
                    printf("Elemento inserido com sucesso!\n");
                }
                imprimeLADAE(lista);
                printf("\n\n");
            }else
                printf("A lista NAO existe!!\n\n\n");
        }
        if(num==3){
            if(criou == 1){
                printf("Digite um elemento: ");
                scanf("%d",&aux.info);

                if(inserirFinal(lista,aux)== SUCESSO){
                    printf("Elemento inserido com sucesso!!!\n");
                }
                imprimeLADAE(lista);
                printf("\n\n");
            }else
                printf("A lista NAO existe!!!!!!\n");
        }
        if(num==4){
            if(criou==1){
                if(RemoveInicio(lista)==1){
                    printf("O elemento do inicio foi removido!\n");

                    imprimeLADAE(lista);
                }else{
                    imprimeLADAE(lista);
                }
            }else
                printf("A lista NAO existe!!\n");
        }
        if(num==5){
            if(criou == 1){
                if(RemoveFinal(lista)==1){
                    printf("O elemento do final foi removido\n");

                    imprimeLADAE(lista);
                }else
                    imprimeLADAE(lista);
            }else
                printf("A lista NAO existe!!!\n\n\n");
        }
        if(num==6){
            if(criou==1){
                printf("Qual elemento deseja buscar? => ");
                scanf("%d",&Ebuscar);
                contador = buscarElemento(lista,Ebuscar);
                if(contador!=-1){
                    printf("O elemento %d encontra-se na posicao: [%d]\n",Ebuscar,contador);
                }else  
                    printf("O elemento NAO se encontra na lista!!!");

                imprimeLADAE(lista);
            }else
                printf("A Lista nao foi criada!!!\n");
        }
        if(num==7){
            if(criou==1){
                liberaLADAE(lista);
                printf("A LADAE foi limpada com sucesso!!!\n");
                criou = 0;
            }else
                printf("A lista NAO existe!\n");
        }
        if(num==8){
            if(criou==1){
                ZerarLADAE(lista);
                printf("A LADAE foi zerada com sucesso!!!\n");
            }else
                printf("A lista NAO existe!\n");
        }
    }while(num!=0);

    printf("OPERACOES ENCERRADAS!");

    liberaLADAE(lista);

    return 0;
}