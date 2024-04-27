#include <stdio.h>

//NGC Difícil viu :´( precisa de big brains nessa sequência

int NFibonacci(int n){
    if (n == 0){
        return 0;
    }else if (n == 1){
        return 1;
    }else{
        return NFibonacci(n-1) + NFibonacci(n-2);
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
