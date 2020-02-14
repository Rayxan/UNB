#include"ladae.h"
#define SUCESSO 1
#define FALHA 0

int main()
{
    LADAE **lista;
    LADAE *node;
    Data aux;
    int r;
    int flag=1;
    
    int elem,op=-1;
    
    do
    {          
        printf("\n\t\tMenu interativo\n\n");
        printf("(1) Criar e Inicializar LADAE\n");
        printf("(2) Inserir elemento no inicio\n");
        printf("(3) Inserir elemento no final\n");
        printf("(4) Remover elemento no inicio\n");
        printf("(5) Remover elemento no final\n");
        printf("(6) Buscar um elemento na LADAE\n");
        printf("(7) Zerar LADAE\n");
        printf("(0) SAIR\n");
        printf("Digite sua opcao: ");
        scanf("%d",&op);

        system(CLEAR);
       
        if(op == 1)
        {
            lista = criaInicializaLADAE();

            printf("Endereço do primeiro no da lista: %p\n",*lista);
            printf("Endereço da lista: %p\n",lista);
            
            printf("Lista LADAE inicializada com sucesso\n");
            flag=0;
        }

        if(flag==1){
            printf("Lista inexistente\n");
        }
        else{
            if(op == 2){

                printf("Digite um elemento: ");
                scanf("%d",&aux.info);
            
                if(insereInicioLADAE(lista,aux) == SUCESSO){

                    printf("Elemento inserido %d com sucesso\n",aux.info);
                }
            
                printf("\n\n\t\t\tImprime lista\n");
                imprimeLADAE(lista);
                printf("\n\n");
            }

            if(op == 3){

                printf("Digite um elemento: ");
                scanf("%d",&aux.info);
            
                if(insereFinalLADAE(lista,aux) == SUCESSO){
                    printf("Elemento inserido %d com sucesso\n",elem);
                }
            
                printf("\n\n\t\t\tImprime lista\n");
                imprimeLADAE(lista);
                printf("\n\n");
            }

            if(op == 4){

                if(removerInicioLADAE(lista) == SUCESSO){
                 printf("Elemento removido com sucesso\n");
                }
            
                printf("\n\n\t\t\tImprime lista\n");
                imprimeLADAE(lista);
                printf("\n");
            }

            if(op == 5){

                if(removerFinalLADAE(lista) == SUCESSO){
                    printf("Elemento removido com sucesso\n");
                }
            
                printf("\n\n\t\t\tImprime lista\n");
                imprimeLADAE(lista);
                printf("\n");
            }

            if(op == 6){

                int n;
                printf("Digite um elemento: ");
                scanf("%d",&n);
                int valor = buscarLADAE(lista,n);
                if(valor==-1){
                    printf("Não existe o elemento\n");
                }
                else{
                    printf("o valor esta na posicao: %d",valor);
                }

            }

            if(op == 7){

                liberaLADAE(lista);
                printf("Liberada com sucesso\n");
                flag=1;
            }

        }        
    }while(op != 0);
    
    printf("Encerrando as operações...\n");
    if(flag==0){
        liberaLADAE(lista);
    } 

    return 0;
}
