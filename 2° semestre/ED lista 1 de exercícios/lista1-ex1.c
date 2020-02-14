Questão 1
Elabore uma função que receba como parâmetro um array de números reais de tamanho N, representado como um ponteiro float, 
e retorne quantos números negativos há nesse array.


#include<stdio.h>
#include<stdlib.h>
int verificar(float *x, int n){
	int cont=0,i;
	for(i=0;i<n;i++){
		if(x[i]<0)
			cont++;
	}
	if(cont==1)
		return 1;
	else
		return 0;
}
int main(){
	int n,cont2=0,i;
	
	printf("Digite o tamanho do vetor:\n");
	scanf("%d",&n);
	
	float v[n],result;
	
	for(i=0;i<n;i++){
		printf("Digite o valor da posicao [%d]: ",i);
		scanf("%f",&v[i]);
		result = verificar(&v[i],n);
		cont2 += result;
	}
	printf("Ha %d numero(s) negativos nesse array",cont2);
	return 0;
}
