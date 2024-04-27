#include<stdio.h>

/*Tive um erro meio bobo na parte dos dois &&*/

int main() {
    float a, b;

    printf("Digite o salario atual:\n");
    scanf("%f", &a);

    if (a <= 600.0) {
        b = a * 1.30;
    }
    
    if (600.01<=a && a<=1100.00){
    	b = a * 1.25;
	}
	
	if (1100.01<=a && a<=2400.00){
		b = a * 1.2;
	}
	
	if (2400.01<=a && a<=3550.00){
		b = a * 1.15;
	}
	
	if (a>3550.00){
		b = a * 1.10;
	}

    printf("Novo salario: R$ %.2f\n", b);

}
