#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif
int main() {
srand(time(NULL));
int cont,cont2, tab[16][16], i,j,qtd=0, vezes=0;

for(cont2=0;cont2<16;cont2++){
    for(cont=0;cont<16 ;cont++){
        tab[cont2][cont] = rand() % 2;
    }
}
do{

for(cont=0;cont<16;cont++){
    for(cont2=0;cont2<16;cont2++){
        qtd = 0;
        for(i=cont;i<3;i++){
            for(j=cont2;j<3;j++){
                if(tab[i-1][j-1]==tab[cont][cont2]){
                    qtd++;
                }
            }
        }
        if(tab[cont][cont2]==0){
            if(qtd<2){
                tab[cont][cont2] = 1;
            }else if(qtd==2 || qtd==3){
                tab[cont][cont2]=0;
            }else if(qtd>3){
                tab[cont][cont2]=1;
            }
        }else{
            if(qtd==3){
                tab[cont][cont2]=0;
            }
        }
        printf("%d",tab[cont2][cont]);
    }
    printf("\n");
}
usleep(720000);
system(CLEAR);
vezes++;
}while(vezes<10);
return 0;
}
