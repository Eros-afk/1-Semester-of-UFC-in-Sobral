#include <stdio.h>
#include <stdlib.h>

int main(){
	int notas[10], x;
	int cont;
	printf("Digite 10 numeros:\n\n");
	
	for(cont=0; cont<10; cont++){
		printf("\nDigite a nota %d: ", cont);
		scanf("%d", &notas[cont]);
	}
	
	printf("\nDigite o valor de X: ");
	scanf("%d", &x);
	
	//Calcular novos valores para o vetor M
	for(cont=1; cont<10; cont++){
		notas[cont] = notas[cont]*x;
		printf("\n%d ", notas[cont]);
	}
}

