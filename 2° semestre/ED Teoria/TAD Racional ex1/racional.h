#include<stdio.h>

struct rac{
  int numerador;
  int denominador;
};typedef struct rac Racional;

int criaRacional(int num, int den,Racional *novo);

Racional adicaoRacional(Racional um, Racional dois);

Racional multRacional(Racional um, Racional dois);

Racional imprimeRacional(Racional var);
