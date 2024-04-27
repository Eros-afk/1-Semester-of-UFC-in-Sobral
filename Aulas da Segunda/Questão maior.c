#include <stdio.h>
#include <stdlib.h>

int main(){
	int notas[20], maior = 0;
	int cont;
	printf("Digite 20 numeros:\n\n");
	
	for(cont=0; cont<20; cont++){
		printf("\nDigite a nota %d: ", cont);
		scanf("%d", &notas[cont]);
		
	}
	
	//Achar o maior numero
	for(cont=1; cont<20; cont++){
		if(notas[cont]>notas[maior]) maior = cont;
	}
	
	printf("\nMaior numero: %d", notas[maior]);
	printf("\nPosicao do maior numero: %d", maior);
}

