#include<stdio.h>
struct tanque{
	int a;
	char b;
};
typedef struct tanque Ursinho;

void leitura(Ursinho *colm){
	char tempc;
	int tempa;
	printf("Digite um numero qualquer: ");
	scanf("%d",&tempa); // digitar 8 por exemplo;
	printf("digite qualquer letra: ");
    getchar();
	scanf("%c",&tempc);
	
	(*colm).a = tempa;
	(*colm).b = tempc;
}
void imprimir(Ursinho carin){
	printf("%d\n",carin.a);
	printf("%c\n",carin.b);
}
int main(){
	Ursinho puff;

	leitura(&puff);
	imprimir(puff);

	return 0;
}
