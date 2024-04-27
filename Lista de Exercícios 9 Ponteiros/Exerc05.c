#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[5];
	
	int i;
	
	for(i=0; i<5; i++){
		printf("Digite o numero[%d]: ", i, A[i]);
		scanf("%d", &A[i]);
	}
	
	for(i=0; i<5; i++){
		*(A + i ) *= 2;	
	}
	
	printf("\n");
	
	for(i=0; i<5; i++){
		printf("Numeros 2x: %d\n", A[i]);
	}
	
}

