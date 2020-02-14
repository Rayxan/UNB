#include<stdio.h>
#include<stdlib.h>
#define MAX 10
double fneuronio(double *ENTRADAS,double *PESOS,int TAM,double T){
    int i;
	double SOMAP=0;
	for(i=0;i<MAX;i++){
		SOMAP += *(ENTRADAS+i) * *(PESOS+i);
	}
	if(SOMAP > T)
		return 1;
	else
		return 0;
}
int main(){
	int i;
	double ENTRADAS[MAX],PESOS[MAX],T,resultado;
		for(i=0;i<MAX;i++){
			printf("Digite um valor de entrada:\n");
			scanf("%lf",&ENTRADAS[i]);
			printf("Digite um valor de peso:\n");
			scanf("%lf",&PESOS[i]);
		}
	printf("Digite o valor de T:\n");
	scanf("%lf",&T);

	resultado = fneuronio(ENTRADAS,PESOS,MAX,T);
	if(resultado == 1){
		printf("Neuronio ativado!");
	}else
		printf("Neuronio inibido!");
	return 0;
}
