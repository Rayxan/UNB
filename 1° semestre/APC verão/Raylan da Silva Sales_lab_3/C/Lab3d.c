#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int main(int argc, char *argv[]){
    FILE *arquivo, *arquivo2;
    int i,n,mat;
    float prova[3],trab[2],media;
    char txt[MAX]=".txt";

    printf("Digite o nome do arquivo:\n");
    scanf("%s",&argv[1]);
    strcat(&argv[1], txt);

    arquivo = fopen (&argv[1],"r");
    arquivo2 = fopen("media.txt","w");

    fscanf(arquivo,"%d",&n);

    printf("Aluno(s): %d\n",n);
    for(i=0;i<n;i++){

    fscanf(arquivo,"%d",&mat);
    printf("Matricula do aluno[%d]: %d ",i,mat);
    fscanf(arquivo,"%f",&prova[0]);
    fscanf(arquivo,"%f",&prova[1]);
    fscanf(arquivo,"%f",&prova[2]);
    fscanf(arquivo,"%f",&trab[0]);
    fscanf(arquivo,"%f",&trab[1]);

    media=(((prova[0]*2)+(prova[1]*3)+(prova[2]*3))/8+(trab[0]+trab[1]))/2;
    printf(" / Media: %.1f\n",media);
    fprintf(arquivo2,"Matricula: ");
    fprintf(arquivo2,"%d / ",mat);
    fprintf(arquivo2,"Media: ");
    fprintf(arquivo2,"%.1f\n",media);

    media = 0;
    }
    fclose(arquivo);
    fclose(arquivo2);
return 0;
}
