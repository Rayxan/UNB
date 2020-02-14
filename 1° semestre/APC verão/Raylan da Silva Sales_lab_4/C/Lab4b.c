#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int qtd=0, k, j;
    float resultado, *vetor, aux, entrada, vetor2[1000];

    do{
        printf("Digite o numero: ");
        scanf("%f",&entrada);
        if(entrada==11){
            break;
        }else{
            qtd++;
            vetor2[qtd]=entrada;
        }
    }while(entrada!=11);

    vetor = (float*)malloc(qtd*sizeof(float));
    for(int cont = 0;cont<qtd;cont++){
        vetor[cont] = vetor2[cont];
    }
    for (k = 1; k <qtd; k++) {
        for (j = 0; j < qtd - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    if(qtd % 2 == 0){
        qtd = qtd/2;
        resultado = (vetor[qtd] + vetor[qtd+1])/2;
        printf("\nO conjunto eh par.\nMediana: %.1f",resultado);
    }else{
        qtd = qtd/2;
        qtd++;
        resultado = vetor[qtd];
        printf("\nO conjunto eh impar.\nMediana: %.1f",resultado);
    }
    free(vetor);
    return 0;
}
