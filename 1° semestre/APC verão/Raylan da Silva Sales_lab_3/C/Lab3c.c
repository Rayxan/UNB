#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
typedef struct{
    int mat;
    float prova[3];
    float trab[2];
}aluno;

int main(int argc, char *argv[]){
    FILE *arquivo;
    char extensao[5] = ".txt";
    int i,n;
    aluno *cadastro;

    if (argc!=2) {
        printf("Voce esqueceu de digitar o nome do arquivo.\n");
        exit(1);
    }

    strcat(argv[1],extensao);
    printf("Digite a quantidade de alunos:\n");
    scanf("%d",&n);

    cadastro = (aluno *) malloc(n*sizeof (aluno));

    for(i=0;i<n;i++){
        printf("Digite a matricula do aluno[%d]:\n",i);
        scanf("%d",&cadastro[i].mat);
        printf("Digite a nota da prova 0: \n");
        scanf("%f",&cadastro[i].prova[0]);
        printf("Digite a nota da prova 1: \n");
        scanf("%f",&cadastro[i].prova[1]);
        printf("Digite a nota da prova 2: \n");
        scanf("%f",&cadastro[i].prova[2]);

        printf("Digite a nota do trabalho 0: \n");
        scanf("%f",&cadastro[i].trab[0]);
        printf("Digite a nota do trabalho 1: \n");
        scanf("%f",&cadastro[i].trab[1]);
        printf("------------------------------------------\n");
    }

    arquivo = fopen(argv[1],"w");
    if(arquivo == NULL){
        printf("ERRO NA ABERTURA DO ARQUIVO!");
        return 1;
    }
    fprintf(arquivo,"%d\n\n",n);

    for(i=0;i<n;i++){
        fprintf(arquivo,"%d\n",cadastro[i].mat);
        fprintf(arquivo,"%.2f\n",cadastro[i].prova[0]);
        fprintf(arquivo,"%.2f\n",cadastro[i].prova[1]);
        fprintf(arquivo,"%.2f\n",cadastro[i].prova[2]);
        fprintf(arquivo,"%.2f\n",cadastro[i].trab[0]);
        fprintf(arquivo,"%.2f\n\n",cadastro[i].trab[1]);
    }
    fclose(arquivo);
return 0;
}
