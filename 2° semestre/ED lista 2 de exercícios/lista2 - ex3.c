#include <stdio.h>
#include <stdlib.h>

int * f(int *vetor, int n){
	int i, *out;

	out = (int *)malloc(sizeof(int*)*n);

	if(vetor==NULL){
		printf("Vetor esta nulo\n");
		exit(0);
	}
	else{
		for(i=0;i<n;i++){
			out[i] = vetor[i]*vetor[i];
		}
		return out; 	
	}


}

void imprime(int *input, int n){
	if(input==NULL){
		printf("Esta nulo\n");
		exit(0);
	}
	else{
		for(int i=0;i<n;i++){
			printf("%d\n",*(input+i));
		}
	}
}


int main(){
	int n,*valores, *quadrado;
	int i;
	scanf("%d",&n);

	valores = (int *)malloc(sizeof(int*)*n);
	
	quadrado = (int *)malloc(sizeof(int*)*n);

	for(i=0;i<n;i++){
		valores[i] = i*n + i + n; 
	}

	quadrado = f(valores,n);	

	imprime(quadrado,n);

	free(valores);
	free(quadrado);

	return 0;

}
