#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int binsearch(int v[], int p, int i, int f);

int main(){
	int *v, p, aux;
	int qtd, i, pv, j, q;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &qtd);

	v = (int*) malloc(qtd*sizeof(int));
	q = qtd;

	for(i=0;i<qtd;i++){
        printf("Digite %d numeros: ", q);
		scanf("%d", &v[i]);
		q--;
	}

	for(i=0;i<qtd;i++){
		for(j=0;j<qtd-1;j++){
			if(v[j]>v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}

	printf("Qual numero voce gostaria de procurar? ");
	scanf("%d", &p);
	pv = binsearch( v, p, 0, qtd-1);

	printf("A posicao do valor %d no vetor e %d", p, pv);

	return 0;
}

int binsearch(int v[], int p, int i, int f){
	int m;

	if(i>f)
		return -1;

	m = (f+i)/2;

	if(v[m]==p)
		return m;

	else if(v[m]>p)
		return binsearch( v, p, i, m-1);

	else
		return binsearch( v, p, m+1, f);

}
