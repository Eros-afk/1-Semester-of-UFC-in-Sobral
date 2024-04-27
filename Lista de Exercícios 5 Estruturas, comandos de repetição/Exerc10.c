#include <stdio.h>

int main() {
    int op;

    printf("Escolha uma operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Todas\n");
    scanf("%d", &op);

    if (op == 1) {
        printf("Tabuada de soma:\n");
        for (int a = 1; a <= 10; a++) {
            for (int b = 1; b <= 10; b++) {
                printf("%d + %d = %d\n", a, b, a + b);
            }
            printf("\n");
        }
    } else if (op == 2) {
        printf("Tabuada de subtracao:\n");
        for (int a = 1; a <= 10; a++) {
            for (int b = 1; b <= 10; b++) {
                printf("%d - %d = %d\n", a, b, a - b);
            }
            printf("\n");
        }
    } else if (op == 3) {
        printf("Tabuada de multiplicacao:\n");
        for (int a = 1; a <= 10; a++) {
            for (int b = 1; b <= 10; b++) {
                printf("%d * %d = %d\n", a, b, a * b);
            }
            printf("\n");
        }
    } else if (op == 4) {
        printf("Tabuada de soma:\n");
        for (int a = 1; a <= 10; a++) {
            for (int b = 1; b <= 10; b++) {
                printf("%d + %d = %d\n", a, b, a + b);
            }
            printf("\n");
        } 

        printf("Tabuada de subtracao:\n");
        for (int a = 1; a <= 10; a++) {
            for (int b = 1; b <= 10; b++) {
                printf("%d - %d = %d \n", a, b, a - b);
            }
            printf("\n");
        }

        printf("Tabuada de multiplicacao:\n");
        for (int a = 1; a <= 10; a++) {
            for (int b = 1; b <= 10; b++) {
                printf("%d x %d = %d\n", a, b, a * b);
            }
            printf("\n");
        }
    } else {
        printf("Opcao invalida.\n");
    }

}
