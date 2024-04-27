#include<stdio.h>

int main(){
	int A[8];
	int a, maior=0, imaior;
	
	for(a=0; a<=7; a++){
		printf("Digite uns numeros [%d]: ", a);
		scanf("%d", &A[a]);
		
		if(A[a] > maior) {
			maior = A[a];
			imaior = a;
		}
	}
	printf("\nO maior numero e [%d]: %d", imaior, maior);
}

