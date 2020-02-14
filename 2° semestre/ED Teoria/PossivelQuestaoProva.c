/* A - Indique o bloco de código fonte para copiar
 o conteúdo da variável strest para a variável *strdin.
 B - Copie a string "marmita seca" para a variável strest
 via acesso indireto para a variável *cpont.
 C - Imprima as strings armazenadas em strest e strdin via 
 acesso indireto por meio da variável *cpont. (obs: não ocorrem em paralelo).
 */
 #include<stdio.h>
 #include<stdlib.h>
 void cpystr(char *dest, char *font){
	 int i;
	 for(i=0;font[i]!='\0';i++){
		 dest[i] = font[i];
	 }
	 dest[i] = '\0';
 }
 int main(){
	 char strest[100] = "pizza time";
	 char *strdin;
	 char *cpont;
	 /*A*/
	 strdin = (char*)malloc(sizeof(char)*100);
	 cpystr(strdin, strest);
	 /*B*/
	 cpont = strest;
	 cpystr(cpont, "marmita seca");
	 printf("Nova strest: %s\n",strest);
	 /*C*/
	 printf("strest: %s\n",cpont);
	 cpont = strdin; /*cpont aponta para strdin*/
	 printf("strdin: %s\n",cpont);
	 free(strdin);
	 return 0;
 }