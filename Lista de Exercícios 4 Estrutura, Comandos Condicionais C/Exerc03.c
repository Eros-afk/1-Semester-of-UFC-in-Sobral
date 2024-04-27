#include<stdio.h>

int main(){
	float a, b, media;
	printf ("Digite as notas:\n");
	scanf ("%f", &a);
	scanf ("%f", &b);
	
	media = (a+b)/2;
	
	if (media >= 6){
	printf("Media= %.2f\n", media);
	printf("APROVADO!\n", a, b);
	}
	if (media < 6){
	printf("Media= %.2f\n", media);
	printf("REPROVADO\n", a, b);
	}
}
