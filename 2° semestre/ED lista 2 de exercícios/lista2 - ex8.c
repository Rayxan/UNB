#include <stdio.h>
#include <stdlib.h>

int main(){
	int **vetInt,*tam,*vetMed,*vetSoma,*soDiv;
	int n,i,j;

	printf("Digite o numero de vetores: \n");
	scanf("%d",&n);

	vetInt = (int **)malloc(sizeof(int*)*n);
	tam = (int *)malloc(sizeof(int*)*n);

	for(i=0;i<n;i++){
		printf("Digite o tamanho do vetor %d: \n",i+1);
		scanf("%d",&tam[i]);

		vetInt[i] = (int *)malloc(sizeof(int)*tam[i]);

		for(j=0;j<tam[i];j++){
			vetInt[i][j]=i+j;
		}
	}

	for(i=0;i<n;i++){
		printf("Vetor %d: ",i+1);

		for(j=0;j<tam[i];j++){
			printf("%d ",vetInt[i][j]);
		}

		printf("\n");
	}

	vetSoma = (int *)malloc(sizeof(int)*n);
	soDiv = (int *)malloc(sizeof(int)*n);
	vetMed = (int *)malloc(sizeof(int)*n);

	for(i=0;i<n;i++){
		vetSoma[i]=0;
		soDiv[i] =0;
		for(j=0;j<tam[i];j++){
			vetSoma[i]+=vetInt[i][j];
			soDiv[i]++;
		}
		free(vetInt[i]);
	}

	for(i=0;i<n;i++){
		vetMed[i]=vetSoma[i]/soDiv[i];
	}

	for(i=0;i<n;i++){
		printf("Media do vetor %d: %d\n",i+1,vetMed[i]);
	}

	free(vetInt);
	free(tam);
	free(vetMed);
	free(vetSoma);
	free(soDiv);
	vetInt=NULL;
	vetSoma=NULL;
	vetMed=NULL;
	tam=NULL;
	soDiv=NULL;

	return 0;
}
