#include<stdio.h>

int main(){
	int a, b, soma = 0, maior, menor, quant = 0;
	float med;
	
	printf("Digite dos numeros inteiros:\n");
	scanf("%d%d", &a, &b);
	
	if (a > b) {
		maior = a;
		menor = b;
	} else{
		maior = b;
		menor = a;
	}
	for(int a = menor; a <= maior; a++){
		soma += a;
		quant++;
	}
	med = (float) soma/quant;
	
	printf("Soma: %d\n", soma);
	printf("Media: %.2f\n", med);
        
	printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);    


}
