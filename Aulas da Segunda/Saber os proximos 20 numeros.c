#include <stdio.h>

int main(){
	int num, limite, soma; 
	limite = 20;
	
	printf("Digite um numero inteiro:");
	scanf("%d", &num);
	
	for(limite = 1; limite <= 20; limite++){
		soma = num + limite;
		printf("Numero:%d\n", soma); 
	}
}
