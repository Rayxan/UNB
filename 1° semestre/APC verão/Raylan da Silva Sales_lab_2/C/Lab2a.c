#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	int R[22],G[22],B[22],i,Rf[20],Gf[20],Bf[20],Dist[20];
	float media;
	R[0]=0;
	R[21]=0;
	G[0]=0;
	G[21]=0;
	B[0]=0;
	B[21]=0;
	srand(time(NULL));
	for(i=1;i<=20;i++){
		R[i] = rand() % 255;
		G[i] = rand() % 255;
		B[i] = rand() % 255;
	}
	for(i=0;i<20;i++){
		Rf[i] = (R[i]+R[i+1]+R[i+2])/3;
		Gf[i] = (G[i]+G[i+1]+G[i+2])/3;
		Bf[i] = (B[i]+B[i+1]+B[i+2])/3;
	}
	for(i=0;i<20;i++){
		printf("Rf[%d] = %d\n",i,Rf[i]);
	}
	printf("---------------\n");
	for(i=0;i<20;i++){
		printf("Gf[%d] = %d\n",i,Gf[i]);
	}
	printf("---------------\n");
	for(i=0;i<20;i++){
		printf("Bf[%d] = %d\n",i,Bf[i]);
	}
	for(i=0;i<20;i++){
		Dist[i] = sqrt(pow((R[i]-Rf[i]),2)+ pow((G[i]-Gf[i]),2)+ pow((B[i]-Bf[i]),2));
	}
	/*printf("---------------\n");
	for(i=0;i<20;i++){
		printf("Distancia = %d\n",Dist[i]);
	}*/
	for(i=0;i<20;i++){
		media +=Dist[i];
	}
	media= media/20;
	printf("---------------\n");
	printf("A distancia euclidiana media entre os 2 vetores eh: %.2f",media);
	
	return 0;
}