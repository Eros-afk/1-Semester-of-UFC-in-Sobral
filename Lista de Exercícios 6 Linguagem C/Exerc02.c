#include<stdio.h>

int main(){
	int A[10];
	int a, count=0;
	
	for(a=0; a<=9; a++){
		printf("Digite uns numeros %d: ", a);
		scanf("%d", &A[a]);
		
		count += A[a];
	}
	
	printf("\nA soma total e: %d", count);


}

