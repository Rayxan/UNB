/*-Criar um vetor por alocação dinâmica de n "Person"s
  -Preencher o vetor com dados válidos
  -Liberar a memória

*/

#include<stdio.h>
#include<stdlib.h>
struct pessoa{
	int idade;
	char *nome;
}; typedef struct pessoa Person;

int main(){
	Person *regs;
	int i,n;
	printf("n: ");
	scanf("%d",&n);
	
	regs = (Person *) malloc(sizeof(Person)*n);
	
	/*Inserir os dados*/
	for(i=0;i<n;i++){
		regs[i].idade = (i+1)*6;
		regs[i].nome =(char *)malloc(sizeof(char)*101);
		scanf("%s",regs[i].nome);
		getchar();
	}
	/*Imprimir os dados*/
	for(i=0;i<n;i++){
		printf("Person %d: id:%d nome:%s\n",i,regs[i].idade,regs[i].nome);
	}
	/*free blocos de char*/
	for(i=0;i<n;i++){
		free(regs[i].nome);
	}
	/*free struct*/
	free(regs);
	return 0;
}