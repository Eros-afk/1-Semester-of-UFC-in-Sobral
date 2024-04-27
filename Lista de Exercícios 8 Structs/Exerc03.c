#include <stdio.h>
#include <stdlib.h>

int main(){
	typedef struct{
        char nome[40];
        int  numero;
        char endereco[40];
    } cadastro;
    
    int N, i = 1;
    
    printf("Digite a quantidade de formularios desejadas: ");
    
    scanf("%d", &N);
    fflush(stdin);
    
    cadastro v1[N];
    
    for(i = 1; i <= N; i++){
    printf("\nDigite o nome, o numero e o endereco: \n");
    scanf("%s", v1[i].nome);
    fflush(stdin);
    scanf("%d", &v1[i].numero);
    fflush(stdin);
    scanf("%s", &v1[i].endereco);
    fflush(stdin);
	}
	
	printf("\n");
	
	for(i = 1; i <= N; i++){
	printf("O nome e: %s\n", v1[i].nome);
	printf("O numero e: %d\n", v1[i].numero);
	printf("O endereco e: %s\n", v1[i].endereco);
	printf("\n");
	}
}

