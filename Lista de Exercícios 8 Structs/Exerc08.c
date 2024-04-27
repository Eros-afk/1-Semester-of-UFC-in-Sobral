#include<stdio.h>
#include<math.h>

typedef struct{
    float x;
    float y;
}Ponto;

int main()
{    
    Ponto p;
    
    int x1=0, y1=0;
    
    printf("Digite dois numeros sendo um para o eixo X e outro para o eixo Y:\n");
    scanf("%f", &p.x);
    scanf("%f", &p.y);
    
    float distancia = sqrt(pow(p.x, 2) + pow(p.y, 2));
    
    printf("Distancia ate a origem: %.2f\n", distancia);
    
}