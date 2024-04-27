#include<stdio.h>
#include<string.h>

/*Dificil*/

int main() {
    char senha[20];

    printf("Digite a senha: ");
    scanf("%s", senha);

    if (strcmp(senha, "abacate") == 0) {
        printf("ACESSO PERMITIDO\n");
    } else {
        printf("ACESSO NEGADO\n");
    }

}
