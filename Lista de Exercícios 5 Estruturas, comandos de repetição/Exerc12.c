#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero natural (0 < N < 46): ");
    scanf("%d", &N);

    if (N <= 0 || N >= 46) {
        printf("O valor de N deve ser maior que 0 e menor que 46.\n");
        return 1;
    }

    int p = 0;
    int s = 1;

    printf("Sequencia de Fibonacci com %d numeros:\n", N);

    if (N >= 1) {
        printf("%d ", p);
    }

    if (N >= 2) {
        printf("%d ", s);
    }

    for (int a = 3; a <= N; a++) {
        int pr = p + s;
        printf("%d ", pr);

        p = s;
        s = pr;
    }

    printf("\n");

    return 0;
}
