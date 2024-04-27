#include<stdio.h>

int main(){
	int num, limite; 
	limite = 225;
	
	for(num = 0; num <= 9; num++){
		printf("Numero:   %d\n", num);
	}
	for(num = 10; num <= 99; num++){
		printf("Numero:  %d\n", num);
	}
	for(num = 100; num <= limite; num++){
		printf("Numero: %d\n", num);
	}


}

