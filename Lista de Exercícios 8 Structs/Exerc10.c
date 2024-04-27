#include<stdio.h>

typedef struct{
    char nome[50];
    int idade;
    int cpf;
    }registro;

int main(){

    registro v1;

    printf("Digite o nome a idade e o cpf do usuario: \n");
    fgets(v1.nome, sizeof(v1.nome), stdin);
    
    scanf("%d", &v1.idade);
    scanf("%d", &v1.cpf);
    
    printf ("\n");
    
    printf("Os dados sao: \n");
    printf("CPF: %d\n", v1.cpf);
    printf("Nome: %s", v1.nome);
    printf("Idade: %d\n", v1.idade);
}