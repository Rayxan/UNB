#include<stdio.h>
int main(){
	int a,b,c;
	printf("Digite um valor: ");
	scanf("%d",&a);
	printf("Digite outro valor: ");
	scanf("%d",&b);
	printf("Digite outro valor: ");
	scanf("%d",&c);
	if(((a+b)>c) && ((a+c)>b) && ((b+c)>a)){
		printf("triangulo ");
		if((a==b) && (a==c) && (b==c)){
			printf("equilatero");
		}else if ((a==b) || (a==c)|| (b==c)){
			printf("isosceles");
		}
		else if((a!=b)&&(a!=c)&&(b!=c)){
			printf("escaleno");
		}
	} else 
		printf("Nao eh um triangulo");
	return 0;
}