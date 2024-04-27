#include<stdio.h>

union tipos{
    int i; //inteiro 
    float r; //real
    };

int main (){
    union tipos dados;
    
    printf("Digite um valor do tipo inteiro: \n");
    scanf("%d", &dados.i);
    
    dados.r = dados.i;
    
    printf("Valor do tipo float e: %.2f\n", dados.r);
    
}