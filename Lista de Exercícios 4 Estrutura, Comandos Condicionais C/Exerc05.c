#include<stdio.h>

/*Bem dificil*/

int main() {
    float a, b, r;
    char o;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &o);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    switch (o) {
        case '+':
            r = a + b;
            break;
        case '-':
            r = a - b;
            break;
        case '*':
            r = a * b;
            break;
        case '/':
            r = a / b;
            break;
        default:
            printf("Operador invalido. Digite um operador valido (+, -, *, /).\n");
            return 1;
    }

    printf("= %.2f\n", r);

}
