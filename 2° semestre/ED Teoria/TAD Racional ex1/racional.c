#include "racional.h"
#define ok 1
#define falha 0
int criaRacional(int num, int den,Racional *novo){
    if((den != 0)){
        (*novo).numerador = num;
        (*novo).denominador = den;
        return ok;
    }
    else{
        return falha;
    }
}
Racional adicaoRacional(Racional um, Racional dois){
    Racional novo;
    novo.numerador = (um.numerador * dois.denominador) + (dois.numerador * um.denominador);
    novo.denominador = (um.denominador * dois.denominador);
    return novo;
}
Racional multRacional(Racional um, Racional dois){
    Racional novo;
    novo.numerador = (um.numerador * dois.numerador);
    novo.denominador = (um.denominador * dois.denominador);
    return novo;
}
Racional imprimeRacional(Racional var){
    printf("%d/%d\n",var.numerador,var.denominador);
}
