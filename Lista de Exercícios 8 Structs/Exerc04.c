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
    printf("\nDigite o nome, o telefone e o endereco: \n");
    scanf("%s", v1[i].nome);
    fflush(stdin);
    scanf("%d", &v1[i].numero);
    fflush(stdin);
    scanf("%s", &v1[i].endereco);
    fflush(stdin);
	}
	
	printf("\n");
	
int opcao;
    printf("Escolha uma opcao de busca:\n");
    printf("1. Buscar por primeiro nome\n");
    printf("2. Buscar por telefone\n");
    scanf("%d", &opcao);
    fflush(stdin);
    
    char buscar[40];
    int encontrado = 0;
    
    switch (opcao) {
        case 1:
            printf("Digite o primeiro nome: ");
            scanf("%s", buscar);
            
            for (i = 0; i < N; i++) {
                if (strcmp(buscar, v1[i].nome) == 0) {
                    printf("\nUsuario encontrado:\n");
                    printf("Nome: %s\n", v1[i].nome);
                    printf("Numero: %d\n", v1[i].numero);
                    encontrado = 1;
                    break;
                }
            }
            break;
            
        case 2:
            printf("Digite o numero de telefone: ");
            int numero;
            scanf("%d", &numero);
            
            for (i = 0; i < N; i++) {
                if (numero == v1[i].numero) {
                    printf("\nUsuario encontrado:\n");
                    printf("Nome: %s\n", v1[i].nome);
                    printf("Numero: %d\n", v1[i].numero);
                    encontrado = 1;
                    break;
                }
            }
            break;
            
        default:
            printf("Opcao inválida!\n");
    }
    
    if (!encontrado) {
        printf("Usuario não encontrado.\n");
    }
    
}