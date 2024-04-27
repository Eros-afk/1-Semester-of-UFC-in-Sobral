#include<stdio.h>

/*Seguinte, de um espaço para ai sim colocar o %c se não da ruim*/

int main(){
	char a, b, c;
	printf("Escreva 3 caracteres:\n");
	scanf(" %c", &a);
	scanf(" %c", &b);
	scanf(" %c", &c);
	
	printf("\n\n%c\n%c\n%c\n", a, b, c);
	
}