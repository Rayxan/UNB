/* */
#include"ladae.h"
#define SUCESSO 1
#define FALHA 0

int main()
{
    LADAE **lista;
    LADAE *node;
    Data aux;
    int r;
    
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
        
        if(op == 1)
        {
            lista = criaLADAE();

            printf("Endereço do primeiro no da lista: %p\n",*lista);
            printf("Endereço da lista: %p\n",lista);
            
            printf("Lista LADAE inicializada com sucesso\n");
        }
        if(op == 2)
        {
            printf("Digite um elemento: ");
            scanf("%d",&aux.info);
            
            if(insereInicioLADAE(lista,aux) == SUCESSO)
            {
                printf("Elemento inserido com sucesso\n");
            }
            
            printf("\n\n\t\t\tImprime lista\n");
            imprimeLADAE(lista);
            printf("\n\n");
        }
        
    }while(op != 0);
    
    printf("Encerrando as operações...\n");
    
    liberaLADAE(lista);
    
    return 0;
}
