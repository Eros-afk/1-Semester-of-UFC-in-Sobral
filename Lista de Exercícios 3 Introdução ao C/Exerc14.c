#include<stdio.h>

int main(){
	char a;
	int b;
	float c;
	printf("Digite 3 variaveis sendo elas 1 caractere, 1 numero inteiro e 1 numero real:\n");
	scanf("%c", &a);
	scanf("%d", &b);
	scanf("%f", &c);
	
	printf("\nOs valores digitados separados por espacos sao: %c %d %.2f\n \nOs valores digitados com uma tabulacao horizontal sao: %c\t%d\t%.2f\n \nOs valores digitados um em cada linha sao:\n%c\n%d\n%.2f\n", a, b, c, a, b, c, a, b, c);
}
