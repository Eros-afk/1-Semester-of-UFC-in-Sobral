#include <stdio.h>

int main(){
	int a, b, A[4][4];
	int soma;
	
	printf("\n==============MATRIZ 4x4==============\n");
	
	for(a=0; a<4; a++){
		for(b=0; b<4; b++){
			printf("\nDigite um valor para [%d][%d]: ", a+1, b+1);
			scanf("%d", &A[a][b]);	
		}
	}
	
	printf("\n");
	
	for (a=0; a<4; a++){
    	for (b=0; b<4; b++){
     		printf("%4d\t", A[a][b]);
	}
	printf("\n");

	}
	
	/*[1,1]; [2,2]; [3,3]; [4,4];
	
	soma = A[0][0] + A[1][1] + A[2][2] + A[3][3];
	
	printf("\nSoma = %d", soma);
	
	Da certo assim se for pequeno.
	*/
	
	for(a=0; a<4; a++){
		soma += A[a][a];		
}
	printf("Soma = %d", soma);

}
