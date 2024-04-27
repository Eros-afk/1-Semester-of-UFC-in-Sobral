#include<stdio.h>

int main(){
	int a, b, c;
	printf ("Digite o dia, mes e ano\n", a, b , c);
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	
	/*Deu trabalho mas sinto uma enorme felicidade por colocar esse easter egg*/
	if(a == 31, b == 12, c == 1999){
		printf ("Cuidado com o Bug do Milenio:\n");
	}
	

printf ("Dia Mes e Ano: %d / %d / %d \n", a, b, c);
}
