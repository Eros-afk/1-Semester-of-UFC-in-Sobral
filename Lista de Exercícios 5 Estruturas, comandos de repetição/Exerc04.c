#include <stdio.h>

int main() {
    int a, n, neg = 0;
    int maior, menor, soma = 0;
    float media;

    printf("Digite 10 numeros:\n");

    for (a = 0; a < 10; a++) {
        scanf("%d", &n);

        if (n < 0) {
            neg++;
        }

        if (a == 0) {
            maior = menor = n;
        } else {
            if (n > maior) {
                maior = n;
            } else if (n < menor) {
                menor = n;
            }
        }

        soma += n;
    }

    media = (float) soma / 10;

    printf("Quantidade de numeros negativos: %d\n", neg);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Soma dos valores: %d\n", soma);
    printf("Media aritmetica: %.2f\n", media);

}