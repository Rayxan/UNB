#include<stdio.h>
int main(){
	int n1,n2,n3,soma,resto,resultado;
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	printf("Digite o terceiro numero: ");
	scanf("%d",&n3);
	soma = (n3*2)+(n2*3)+(n1*4);
	resto = soma%11;
	resultado = 11 - resto;
	printf("O numero que representa o verificador eh: %d",resultado);
	return 0;
}