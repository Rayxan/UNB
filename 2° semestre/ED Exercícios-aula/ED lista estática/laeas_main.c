#include"laeas.h"
#define MAX 5
#define SUCESSO 0

int main(){
    LAEAS vetorLista;
    int num,elemento,criado=0;
    do{
        printf("\n\nDigite uma opcao: \n");
        printf("1 Criar lista\n");
        printf("2 Verificar se a lista estah cheia\n");
        printf("3 Verificar se a lista estah vazia\n");
        printf("4 Imprimir lista\n");
        printf("5 Inserir elemento no inicio\n");
        printf("6 Inserir elemento no final\n");
        printf("7 Remover elemento no inicio\n");
        printf("8 Remover elemento no final\n");
        /*printf(" Buscar elemento\n");*/
        printf("9 Limpar lista\n");
        printf("0 Para sair\n");
        scanf("%d",&num);
        system(CLEAR);

        if(num == 1){
            criarLAEAS(&vetorLista);
            printf("A lista foi criada com sucesso, boy\n");
            criado = 1;
        }
        if(num == 2){
            if(criado == 1){
                if((vCheia(&vetorLista)==SUCESSO)){
                    printf("A lista estah cheia!\n");
                }else
                    printf("A lista NAO estah cheia!\n");
            }else
                printf("A lista NAO foi criada");
        }
        if(num == 3){
            if(criado == 1){
                if(vVazia(&vetorLista)==SUCESSO){
                    printf("A lista estah vazia!\n");
                }else 
                    printf("A lista NAO estah vazia!\n");
            }else
                printf("A lista NAO foi criada!");
        }
        if(num == 4){
            if(criado == 1){
                imprimirLAEAS(&vetorLista);
            }else
                printf("A lista NAO foi criada");
        }
        if(num == 5){
            if(criado == 1){
                printf("Digite o elemento a ser inserido: ");
                scanf("%d",&elemento);
                if(inserirInicio(&vetorLista,elemento)==SUCESSO){
                    printf("O elemento foi inserido com SUCESSO!\n");
                }else
                    printf("Lista cheia, elemento NAO inserido!");
            }else
                printf("A lista NAO foi criada!");
        }
        if (num == 6){
            if(criado == 1){
                printf("Digite o elemento a ser inserido: \n");
                scanf("%d",&elemento);
                if(inserirFim(&vetorLista,elemento)==SUCESSO){
                    printf("O elemento foi inserido com SUCESSO!\n");
                }else 
                    printf("Lista cheia, elemento nao inserido!\n");
        }else
            printf("A lista NAO foi criada!");
        }
        if(num==7){
            if(criado == 1){
                if(removerInicio(&vetorLista)==SUCESSO){
                    printf("Remocao feita com sucesso!\n");
                }else
                    printf("Remocao impossivel, lista vazia\n");
            }else
                printf("A lista NAO foi criada!");
        }
        if(num==8){
            if(criado == 1){
                if(removerFim(&vetorLista)==SUCESSO){
                    printf("Remocao feita com sucesso!\n");
                }else 
                    printf("Remocao impossivel, lista vazia\n");
            }else
                printf("A lista NAO foi criada!");
        }
        if(num == 9){
            if(criado == 1){
                if(limparLAEAS(&vetorLista)==SUCESSO){
                    printf("A lista estah limpa!\n");
                }else
                    printf("Nao eh possivel limpar um lista vazia\n");
            }else
                printf("A lista NAO foi criada!");
        }
        
    }while(num!=0);
    return 0;
}