#include <stdio.h>
#include <stdlib.h>

int fatorial (int numero){
	int i = 0;
	int fatorial = 1;
	
	for(i = 0; i < numero; i++){
		
		fatorial *= (numero-i);
		
	}
		return fatorial;
}


int main(){
	
	int num = 0;
	int resultado;
	
	printf("Digite um numero inteiro para achar o seu !: ");
	scanf("%d", &num);
	
	resultado = fatorial(num);
	
	printf("O fatorial de %d e: %i", num, resultado);
}

/*unsigned long long int fatorial (int numero){
	int i = 0;
	unsigned long long int fatorial = 1;
	
	for(i = 0; i < numero; i++){
		
		fatorial *= (numero-i);
		
	}
		return fatorial;
}


int main(){
	
	int num = 0;
	unsigned long long int resultado;
	
	printf("Digite um numero inteiro para achar o seu !: ");
	scanf("%d", &num);
	
	resultado = fatorial(num);
	
	printf("O fatorial de %d e: %llu", num, resultado);
}*/
