Questão: 2 Construa um programa em linguagem C que contenha duas variáveis 
int var e int *ptr em que o valor de var seja lido e impresso indiretamente.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int var,*ptr;
	printf("Digite o valor de var: ");
	scanf("%d",&var);
	ptr = &var;
	printf("O valor de var eh: %d",*ptr);
	return 0;
}
