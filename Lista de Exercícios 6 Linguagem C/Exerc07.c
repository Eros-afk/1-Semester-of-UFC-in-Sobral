#include <stdio.h>

int main(){
	int a, b, A[5][5];
	int soma, imenor=A[0][0];
	
	printf("\n==============MATRIZ 5x5==============\n");
	
	for(a=0; a<5; a++){
		for(b=0; b<5; b++){
			printf("\nDigite um valor para [%d][%d]: ", a+1, b+1);
			scanf("%d", &A[a][b]);	
		}
	}
	
	printf("\n");
	
	for (a=0; a<5; a++){
    	for (b=0; b<5; b++){
     		printf("%5d\t", A[a][b]);
	}
	
	printf("\n");
	
	}
	
	for (a=0; a<5; a++){
    	for (b=0; b<5; b++){
     		if(imenor > A[a][b]){
     			imenor = A[a][b];
			 }
	}
}

	printf("O menor numero e: %d", imenor);
}
