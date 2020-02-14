#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int i, j, *mat, Nlin, Ncol, *mataux, Mdig = -1e9, k, l;
    double energia=0, contrast=0, entropia=0, homogeneidade=0;

    printf("Digite o numero de linhas da matriz: \n");
    scanf("%d", &Nlin);
    printf("Digite o numero de colunas da matriz: \n");
    scanf("%d", &Ncol);

    mat = (int*) malloc(Nlin*Ncol*sizeof(int));

    for(i=0;i<Nlin;i++){
        for(j=0;j<Ncol;j++){
            *(mat+(i*Ncol)+j) = rand() % 11;
            printf("%d ",  *(mat+(i*Ncol)+j));
        }
        printf("\n");
    }

    for(i=1;i<Nlin;i++){
        for(j=0;j<Ncol;j++){
            if(*(mat+(i*Ncol)+j) > Mdig){
                Mdig = *(mat + (i*Ncol) + j);
            }
        }
    }

    Mdig+=1;

    printf("%d\n", Mdig);

    mataux = (int*) malloc(Mdig*Mdig*sizeof(int));

    for(i=0;i<Mdig;i++){
        for(j=0;j<Mdig;j++){
           *(mataux+(i*Mdig)+j)=0;
           printf("%d ", *(mataux+(i*Mdig)+j));
        }
        printf("\n");
    }

    for(i=0;i<Nlin;i++){
        for(j=1;j<Ncol;j++){
            *(mataux+(*(mat+(i*Ncol)+j-1)*Mdig)+*(mat+(i*Ncol)+j)) += 1;
        }
    }

    printf("\n");

    for(i=0;i<Mdig;i++){
        for(j=0;j<Mdig;j++){
           printf("%d ", *(mataux+(i*Mdig)+j));
        }
        printf("\n");
    }

    for(i=0;i<Mdig-1;i++){
        for(j=0;j<Mdig-1;j++){
            energia += pow(*(mataux+(i*Mdig)+j),2);
        }
    }

    for(i=0;i<Mdig-1;i++){
        for(j=0;j<Mdig-1;j++){
            entropia += (-log(*(mataux+(i*Mdig)+j))) * (*(mataux+(i*Mdig)+j));
        }
    }

    for(i=0;i<Mdig-1;i++){
        for(j=0;j<Mdig-1;j++){
            contrast += *(mataux+(i*Mdig)+j)*pow(i-j,2);
        }
    }

    for(i=0;i<Mdig-1;i++){
        for(j=0;j<Mdig-1;j++){
            homogeneidade += (*(mataux+(i*Mdig)+j))/(1+pow(i-j,2));
        }
    }

    printf("Energia: %.2lf\nEntropia: %.2lf\nContraste: %.2lf\nHomogeneidade: %.2lf\n", energia, entropia, contrast, homogeneidade);

    free(mat);
    free(mataux);
    return 0;
}

