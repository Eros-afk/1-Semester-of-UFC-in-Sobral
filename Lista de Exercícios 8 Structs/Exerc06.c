#include <stdio.h>

enum Meses {
    Janeiro = 1,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Desembro
};

int main() {
    int mes;

    do{
    printf("Digite um valor inteiro entre 1 e 12: ");
    scanf("%d", &mes);
    
    switch (mes) {
        case Janeiro:
            printf("Janeiro - 31 dias\n");
            break;
        case Fevereiro:
            printf("Fevereiro - 28 dias\n");
            break;
        case Marco:
            printf("Marco - 31 dias\n");
            break;
        case Abril:
            printf("Abril - 30 dias\n");
            break;
        case Maio:
            printf("Maio - 31 dias\n");
            break;
        case Junho:
            printf("Junho - 30 dias\n");
            break;
        case Julho:
            printf("Julho - 31 dias\n");
            break;
        case Agosto:
            printf("Agosto - 31 dias\n");
            break;
        case Setembro:
            printf("Setembro - 30 dias\n");
            break;
        case Outubro:
            printf("Outubro - 31 dias\n");
            break;
        case Novembro:
            printf("Novembro - 30 dias\n");
            break;
        case Desembro:
            printf("Dezembro - 31 dias\n");
            break;
        default:
            printf("Valor inválido. Digite um número entre 1 e 12.\n");
        }
    
    }while(mes<1 || mes>12);

}
