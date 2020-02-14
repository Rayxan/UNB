#include<stdio.h>
#include "racional.h"

int main(){
    Racional var1,var2,varadd,varmul;
    int num,den,criou;
    do{
    printf("numerador e denominador do numero:\n");
    scanf("%d %d",&num,&den);
    criou = criaRacional(num,den,&var1);
    }while(criou==0);
    
    do{
    printf("numerador e denominador do numero:\n");
    scanf("%d %d",&num,&den);
    criou = criaRacional(num,den,&var2);
    }while(criou==0);
    
    varadd = adicaoRacional(var1,var2);
    imprimeRacional(varadd);
    
    varmul = multRacional(var1,var2);
    imprimeRacional(varmul);
    
    return 0;
}
