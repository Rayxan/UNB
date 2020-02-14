Responda o que será impresso ao executar o código-fonte abaixo:

# include <stdio.h>

int main ()
{
	int i ,*p ,*q;
	i = 9;
	p = &i;
	q = &p;
	printf("%d\n",*q);
 return 0;
}

Resposta: Imprime 6422296, que é o endereço de i em decimal, e já que q aponta pra p e p contém o endereço de i como conteúdo,
o conteúdo de q vai ser o valor que está no conteúdo de p, que nesse caso é o endereço de i.
