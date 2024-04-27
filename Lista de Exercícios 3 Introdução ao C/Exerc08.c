#include<stdio.h>

int main(){
	int a, b;
	scanf ("%d", &a);
	scanf ("%d", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf ("Valor invertido: %d = a, %d = b\n", a, b);
}
