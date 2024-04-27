#include <stdio.h>

//Muito dificil.

int nprimo(int num) {
    if (num <= 1) {
        return 0;
    }

    int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int A[5][5];
    int a, b;

    printf("\n==============MATRIZ 5x5==============\n");

    for (a = 0; a < 5; a++) {
        for (b = 0; b < 5; b++) {
            printf("\nDigite um valor para [%d][%d]: ", a + 1, b + 1);
            scanf("%d", &A[a][b]);
        }
    }

    int eprimo = 1;

    for (a = 0; a < 5; a++) {
        for (b = 0; b < 5; b++) {
            if (!nprimo(A[a][b])) {
                eprimo = 0;
                break;
            }
        }
        if (!eprimo) {
            break;
        }
    }

    for (a = 0; a < 5; a++) {
        for (b = 0; b < 5; b++) {
            printf("%5d", A[a][b]);
        }
        printf("\n");
    }

    printf("\n");

    if (eprimo) {
        printf("A matriz contem apenas numeros primos.\n\n");
    } else {
        printf("A matriz nao contem apenas numeros primos.\n");
    }

    return 0;
}

