#include <stdio.h>

int main(){
	int count;
    int maior, menor, soma = 0;

    printf("Digite 2 numeros:\n");
    scanf("%d", &menor);
    scanf("%d", &maior);

    for( count = menor; count <= maior; count++){
    	soma += count; 
	}

	printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Soma dos valores: %d\n", soma);

}



