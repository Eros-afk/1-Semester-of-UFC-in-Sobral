#include <stdio.h>

int main() {
    int h;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &h);

    for (int a = 1; a <= h; a++) {
        for (int b = 1; b <= h - a; b++) {
            printf(" ");
        }

        for (int b = 1; b <= a * 2 - 1; b++) {
            printf("*");
        }

        printf("\n");
    }

}
