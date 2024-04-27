#include <stdio.h>

int main()
{
    int a, i, termo = 1;

    printf("Digite um numero Natural:\n");
    scanf("%d", &a);

    printf("Os primeiros %d termos da serie sao:\n", a);
    for(i = 1; i <= a; i++)
    {
        printf("%d ", termo);
        termo += 4;
    }

}
