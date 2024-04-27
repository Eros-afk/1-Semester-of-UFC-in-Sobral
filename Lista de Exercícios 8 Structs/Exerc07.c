#include <stdio.h>

typedef enum {
    Solteiro,
    Casado,
    Separado,
    Viuvo,
} EstadoCivil;

typedef struct {
    char nome[50];
    int idade;
    float peso;
    EstadoCivil est_civil;
} Pessoa;

int main() {
    Pessoa pessoas[3];

    for (int i = 1; i <= 3; i++) {
        printf("Digite o nome da pessoa %d: ", i);
        scanf("%s", pessoas[i].nome);

        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &pessoas[i].idade);

        printf("Digite o peso da pessoa %d: ", i);
        scanf("%f", &pessoas[i].peso);

        printf("Digite o estado civil da pessoa %d (0 - Solteiro, 1 - Casado, 2 - Separado, 3 - Viúvo): ", i);
        int estadoCivil;
        scanf("%d", &estadoCivil);
        pessoas[i].est_civil = (EstadoCivil)estadoCivil;
        
        printf("\n");
    }

    printf("Valores das 3 pessoas:\n");

    for (int i = 1; i <= 3; i++) {
        printf("Pessoa %d\n", i);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Peso: %.2f\n", pessoas[i].peso);
        
        switch (pessoas[i].est_civil) {
            case Solteiro:
                printf("Estado Civil: Solteiro\n");
                break;
            case Casado:
                printf("Estado Civil: Casado\n");
                break;
            case Separado:
                printf("Estado Civil: Separado\n");
                break;
            case Viuvo:
                printf("Estado Civil: Viuvo\n");
                break;
        }
        
        printf("\n");
    }

}
    