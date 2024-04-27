#include <stdio.h>
#include <stdlib.h>

int main(){
	
	typedef struct{
		char nome[100];
		int  idade;
	}valores;
	
	int qntp;
	int i;
	int idad;
	int cont = 0;
	
	printf("Digite a quantidade de pessoas: ");
	scanf("%d", &qntp);
	fflush (stdin);

	valores v1[qntp];
	
	for(i=0; i<qntp; i++){
		printf("\nDigite o nome da pessoa [%d]: ", i+1);
		scanf("%s", &v1[qntp]);
		fflush (stdin);
		printf("Digite sua idade: ", idad);
		scanf("%d", &v1[qntp]);
		fflush (stdin);
			printf("\n");
	}
	
	for(i=0; i<qntp; i++){
		if(v1[qntp] >= 18){
			cont++;
		}
	}
	
	for(i=0; i<qntp; i++){
		if(v1.idade >= 18){
			printf("%s", v1.nome);
			printf("%d", v1.idade);
		}
	}
	
	

	printf("A quantidade de maiores de idade sao: %d", cont);
	
		
	
	
}

