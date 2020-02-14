#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n;
    int **array;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    array= (int **) malloc(sizeof(int*)*n);
    for(i=0;i<n;i++){
        array[i] = (int *) malloc(sizeof(int)*n);
        for(j=0;j<n;j++){
           array[i][j] = i*j - (i+j); /*calcula os numeros a serem inseridos na matriz*/
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    printf("& **array: %p\n",array);

    for(i=0;i<n;i++){
        free(array[i]);
    }
    free(array);
    array =NULL;
    return 0;
}
/* valgrid --leak-check=full ./nomeDoPrograma */
