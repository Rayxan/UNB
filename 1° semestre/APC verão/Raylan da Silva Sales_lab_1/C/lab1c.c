#include<stdio.h>
int main(){
	double A,B;
	int anos=0;
	A = 90000000;
	B = 200000000;
	while(A<B){
		A = A*1.03;
		B = B*1.015;
		anos++;
	}
	printf("Levara %d anos",anos);
	return 0;
}

