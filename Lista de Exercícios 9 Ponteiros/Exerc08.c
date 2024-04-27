#include <stdio.h>

//NGC Difícil viu :´( precisa de big brains nessa sequência

int NFibonacci(int n){
    int i = 0;
    int j = 1;
    int k = 0;
    
    if(n == 0){
        return i;
    } else if(n == 1){
        return j;
    } else{
        for(int x = 2; x <= n; x++){
            k = i + j;
            i = j;
            j = k;
        }
        return k;
    }
}

int main(){
    int N;
    int i;

    printf("Digite um numero inteiro positivo (N): ");
    scanf("%d", &N);
    
    printf("Os %d primeiros numeros da serie de Fibonacci sao: \n", N);
    for(i = 0; i < N; i++){
        printf("%d ", NFibonacci(i));
    }
    printf("\n");
    
}