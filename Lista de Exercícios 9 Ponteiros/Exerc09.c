#include <stdio.h>

int fatorial(int numero){
	if(numero == 0 || numero == 1){
		return 1;}else{
		return numero * fatorial(numero - 1);}
}

int main(){
	int n = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("Fatorial de %d eh: %d", n, fatorial(num));
}