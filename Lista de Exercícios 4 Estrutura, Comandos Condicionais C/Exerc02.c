#include<stdio.h>

int main(){
	float a;
	printf ("Digite um numero:\n");
	scanf ("%f", &a);
	if (a>0){
		printf("O NUMERO E POSITIVO");
	}
	if (a<0){
		printf("O NUMERO E NEGATIVO");
	}
	if (a==0){
		printf("O NUMERO E IGUAL A ZERO");
	}
}
