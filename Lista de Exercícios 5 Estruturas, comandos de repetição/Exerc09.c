#include<stdio.h>

int main(){
	int num;
	printf("Digite um valor de um numero para descobrir se ele e primo: \n");
	scanf("%d", &num);
	
	if(num / 1 == num || num / num == 1){
		printf("O numero %d e primo");
	}while("O numero %d nao e primo");


}
