#include<stdio.h>

/*A palavra reservada const é imutavel não podendo então ter seu valor alterado, 
assim o programa não consegue alterar o valor da constante*/

int main(){
	const int a = 1;
	printf("Valor da constante: %d\n", a);
	
	a = 2;
	printf("Valor da constante: %d\n", a);
}