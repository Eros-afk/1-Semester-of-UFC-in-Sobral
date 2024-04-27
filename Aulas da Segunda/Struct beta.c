#include <stdio.h>
#include <stdlib.h>

int main(){
	
	typedef struct {
		char nome[100];
		int  idade;
		int  cpf;
	} Valores;
	
	printf("Digite seu nome, idade e cpf: \n");

	Valores v1;
	
	scanf("%s", &v1.nome);
	scanf("%d", &v1.idade);
	scanf("%d", &v1.cpf);

	printf("Nome: %s\n", v1.nome);
	printf("Idade: %d\n", v1.idade);
	printf("CPF: %d", v1.cpf);

	
}

