/*x = achar o ponto médio
y = fórmula
x1,x2 são os intervalos
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float x1,x2,x,y,e= 0.0001,calc,calc1;
	x1= 0;
	x2= 2;
	calc= pow(x1,3)-x1-1;
	calc1= pow(x2,3)-x2-1;
	if(calc>calc1){
		printf("decrescente\n");
	}else
		printf("crescente\n");
	do{
		x= (x1+x2)/2;
		y= pow(x,3)-x-1;
		if(y > e){
			x2 = x;
		}else if(y < -e){
			x1=x;
		}
	}while(y > e || y < -e);
	printf("Letra a: %.4f\n",x);
	printf("=============================================");
	
	x1= 0.1;
	x2=1;
	calc= x1 + log(x1) ;
	calc1= x2 + log(x2);
	if(calc>calc1){
		printf("\ndecrescente\n");
	}else
		printf("\ncrescente\n");
	do{
		x = (x1+x2)/2;
		y = x + log(x);
		if(y > e){
			x2=x;
		}else if(y < -e){
			x1=x;
		}
	}while(y > e || y < -e);
	printf("\nLetra b: %.4f\n",x);
	printf("=============================================");
	
	x1 = 0;
	x2 = 2;
	calc= 5*sin(x1)-5+x1;
	calc1= 5*sin(x2)-5+x2;
	if(calc>calc1){
		printf("\ndecrescente\n");
	}else
		printf("\ncrescente\n");
	do{
		x=(x1+x2)/2;
		y = 5*sin(x)-5+x;
		if(y>e){
			x2=x;
		}else if(y<-e){
			x1=x;
		}
	}while(y>e || y<-e);
	printf("\nLetra c: %.4f\n",x);
	printf("=============================================");
	
	x1 = 1;
	x2 = 2.5;
	calc= pow(x1,3)-3*x1-2;
	calc1= pow(x2,3)-3*x2-2;
	if(calc>calc1){
		printf("\ndecrescente\n");
	}else
		printf("\ncrescente\n");
	do{
		x=(x1+x2)/2;
		y = pow(x,3)-3*x-2;
		if(y>e){
			x2=x;
		}else if(y<-e){
			x1=x;
		}
	}while(y>e || y<-e);
	printf("\nLetra d: %.0f\n",x);
	printf("=============================================");
	
	x1 = -1.5;
	x2 = -0.5;
	calc= pow(x1,3)-2*pow(x1,2)-13*x1-10;
	calc1= pow(x2,3)-2*pow(x2,2)-13*x2-10;
	if(calc>calc1){
		printf("\ndecrescente\n");
	}else
		printf("\ncrescente\n");
	do{
		x=(x1+x2)/2;
		y = pow(x,3)-2*pow(x,2)-13*x-10;
		if(y>e){
			x2=x;
		}else if(y<-e){
			x1=x;
		}
	}while(y>e || y<-e);
	printf("\nLetra e: %.0f\n",x);
	printf("=============================================");
	return 0;
}