#include<stdio.h>
int main(){
	int a=6,b=7;
	int v[5] = {3,2,0,-4,2};
	int *pont;

	printf("%d\n",*(v+1));/*Imprime 2*/

	pont = &a; /*pont aponta para a*/

	printf("%d\n",(*pont)+1);/*Imprime 7 ---- (obs: (*pont) = 6)*/

	*pont = *pont + 5; /*operação indireta a=a+5. Nesse caso *pont = 11 */

	printf("%d\n",a); /*imprime 11*/

	pont = &b; /*pont aponta para b*/

	*pont = a - *pont; /* *pont=4*/

	printf("%d\n",b); /*Imprime 4*/

	/*obs: endereços de memória fictícios*/
	printf("%p\n",pont);/*Imprime 0x2012*/
	printf("%p\n",&b);/*Imprime 0x2012*/
	printf("%p\n",&pont);/*Imprime 0x2016*/

    /*Possivel questao de prova*/
	pont = v;
	pont = &v;

	printf("\n%p\n",v);
	printf("%p\n",&v);
    /*Possivel questao de prova*/

	return 0;
}
