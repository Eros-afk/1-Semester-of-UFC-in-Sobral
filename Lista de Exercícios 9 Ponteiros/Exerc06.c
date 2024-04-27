#include <stdio.h>

float potencia(float base, int expoente){
	float potencia = 1;
	int i;
	
	if (expoente >= 0){
		for(i = 0; i <  expoente; i++){
			potencia *= base;
		}	
	}else{
		for(i = 0; i < -expoente; i++){
			potencia /= base;
		}
	}
	return potencia;
}

int main(){
	float x = 0;
	int y = 0;
	
	printf("Digite o valor de x: ");
	scanf("%f", &x);
	
	printf("Digite o valor de y: ");
	scanf("%d", &y);
	
	float z = potencia(x, y);
	
	printf("Resultado: %.2f", z);
}
