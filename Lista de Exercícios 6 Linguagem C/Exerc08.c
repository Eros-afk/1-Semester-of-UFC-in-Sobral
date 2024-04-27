#include <stdio.h>

int main(){
	int a, b, A[3][3], B[3][3], C[3][3];
	
	printf("\n==============MATRIZ 3x3==============\n");
	
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
			printf("\nDigite um valor para [%d][%d]: ", a+1, b+1);
			scanf("%d", &A[a][b]);	
		}
	}
	
	printf("\n");
	
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
			printf("\nDigite um valor para a 2 matriz [%d][%d]: ", a+1, b+1);
			scanf("%d", &B[a][b]);	
		}
	}


	printf("\n");

	for (a=0; a<3; a++){
    	for (b=0; b<3; b++){
    		C[a][b] = A[a][b] + B[a][b];
		}
	}
	
	printf("\nSoma das matrizes:\n\n");
	
	for (a=0; a<3; a++){
    	for (b=0; b<3; b++){
			printf("%d\t", C[a][b]);
		}
		printf("\n");
	}

}

