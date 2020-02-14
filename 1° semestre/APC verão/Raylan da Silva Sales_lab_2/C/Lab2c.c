#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 3
#define MAX1 100
#define MAX2 5
typedef struct{
	int nr;
	char nome[MAX1];
	char departamento[MAX2];
	float nota[3];
	float media;
}taluno;
	int main(){
		int i,j=0,cont=0,contRep=0,cont1;
		char nomeNovo[MAX1],departamentoNovo[MAX];
		float soma=0,mediaTurma,menorNota=11,maiorMedia=0.00000001;
		taluno aluno[MAX];
		for(i=0;i<MAX;i++){
			printf("Digite nr do aluno:\n");
			scanf("%d", &aluno[i].nr);
			getchar();

            /*Ler e Escrever o nome e ajustar letras*/
			printf("Digite nome do aluno:\n");
			scanf("%[^\n]", nomeNovo);
			for(cont1=0;nomeNovo[cont1]!='\0';cont1++){
                if(cont1==0){
                    aluno[i].nome[cont1] = toupper(nomeNovo[cont1]);
                }else if(nomeNovo[cont1-1]==' '){
                    aluno[i].nome[cont1]=toupper(nomeNovo[cont1]);
                }else if(nomeNovo[cont1]!=' '){
                    aluno[i].nome[cont1]=tolower(nomeNovo[cont1]);
                }else if(nomeNovo[cont1]==' '){
                    aluno[i].nome[cont1] = ' ';
                }
			}
			getchar();
			aluno[i].nome[cont1] = '\0';
            /*Ler e escrever o departamento e ajustar as letras*/
			printf("Digite o departamento:\n");
			scanf("%s", departamentoNovo);
			for(cont1=0;departamentoNovo[cont1]!='\0';cont1++){
                if(cont1==3){
                    aluno[i].departamento[cont1]=' ';
                }else if(departamentoNovo[cont1]!=' '){
                    aluno[i].departamento[cont1]=toupper(departamentoNovo[cont1]);
                }
			}
			aluno[i].departamento[cont1] = '\0';

			printf("Digite nota 0:\n");
			scanf("%f", &aluno[i].nota[0]);
			printf("Digite nota 1:\n");
			scanf("%f", &aluno[i].nota[1]);
			printf("Digite nota 2:\n");
			scanf("%f", &aluno[i].nota[2]);
			printf("\n");
		}
		for(i=0;i<MAX;i++){
			aluno[i].media = ((aluno[i].nota[0]+aluno[i].nota[1]+aluno[i].nota[2])/3);
			soma += aluno[i].media;
		}
		/*Imprimir na tela os valores digitados*/
		for(i=0;i<MAX;i++){
			printf("aluno[%d].nr : %d\n",i,aluno[i].nr);
			printf("aluno[%d].nome : %s\n",i,aluno[i].nome);
			printf("aluno[%d].curso : %s\n",i,aluno[i].departamento);
			printf("aluno[%d].nota[0] : %.1f\n",i,aluno[i].nota[0]);
			printf("aluno[%d].nota[1] : %.1f\n",i,aluno[i].nota[1]);
			printf("aluno[%d].nota[2] : %.1f\n",i,aluno[i].nota[2]);
			printf("aluno[%i].media: %.1f\n",i,aluno[i].media);
			printf("\n");
		}
		/*Imprimir valores calculados*/

		mediaTurma = soma/3;
		printf("Media da turma: %.1f\n",mediaTurma);

		for(i=0;i<MAX;i++){
            if(aluno[i].nota[0]<menorNota){
                menorNota = aluno[i].nota[0];
			}
		}
        printf("Menor nota na primeira prova: %.1f\n",menorNota);

        for(i=0;i<MAX;i++){
            if(aluno[i].media>maiorMedia){
                maiorMedia = aluno[i].media;
                j=i;
            }
        }
        printf("Aluno com maior media: %s\n",aluno[j].nome);

        for(i=0;i<MAX;i++){
            aluno[i].media = ((aluno[i].nota[0]+aluno[i].nota[1]+aluno[i].nota[2])/3);
			soma += aluno[i].media;

			if(aluno[i].media<mediaTurma){
                cont++;
			}
        }
        printf("O numero de alunos abaixo da media da turma eh: %d\n",cont);

        printf("\nAlunos reprovados: \n");
        for(i=0;i<MAX;i++){
            if(aluno[i].media<5){
                printf("O aluno %s foi reprovado\n",aluno[i].nome);
            }else{
            contRep++;
            }
            }
            if(contRep==3){
                printf("Nao ha!");
            }
	return 0;
}
/*
Opicional
-criar um printf("Digite o numero de alunos que deseja cadastrar:\n");
armazenar em uma variável n;
-mudar o MAX pra 3
*/
