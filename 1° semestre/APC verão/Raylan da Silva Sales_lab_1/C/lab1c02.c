#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float x1,x2,fx1,fx2,a=3.0,b=14.0,e=0.0001,xm,fxm;
	while(fabs(a-b)>e){
		x1 = a+((b-a)/3);
		x2 = b-((b-a)/3);
		
		fx1 = (50-2*x1)*(25-2*x1)*x1;
		fx2 = (50-2*x2)*(25-2*x2)*x2;
		
		if(fx2 > fx1){
			a=x1;
		}else{
			b=x2;
		}
		xm = (a+b)/2;
		fxm = (50-2*xm)*(25-2*xm)*xm;
	}
	printf("O valor do volume maximo eh: %.2f\nO valor maximo de x eh: %.2f",fxm,xm);
	return 0;
}