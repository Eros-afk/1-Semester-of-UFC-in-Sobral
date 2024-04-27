#include<stdio.h>

//Matriz e bem bonita

int main(){
	int a,b, A[3][3];
	
	printf("\n==============MATRIZ 3x3==============\n");
	
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
		printf("\nDigite um valor para [%d][%d]: ", a+1, b+1);
		scanf("%d", &A[a][b]);	
		}
	}
	
	printf("\n");
	
	for (a=0; a<3; a++){
    	for (b=0; b<3; b++){
     		printf("%3d\t", A[a][b]);
	}
	printf("\n");

	}
}

