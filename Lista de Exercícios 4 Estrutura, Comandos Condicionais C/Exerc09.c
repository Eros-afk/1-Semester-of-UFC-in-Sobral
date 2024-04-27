#include<stdio.h>

int main(){
	float a, b, c;
	printf("Digite 3 valores numericos:\n");
	scanf("%f", &a);
		scanf("%f", &b);
			scanf("%f", &c);

	if(a<b+c,
		b<c+a,
			c<a+b){
				printf("O triangulo e possivel\n");
			} else{printf("O triangulo nao e possivel\n");}
			
			
			
	if (a == b && b == c) {
    printf("O triangulo e equilatero\n");
}

	if (a == b || a == c || b == c){
		printf("O triangulo e isoceles\n");
	}		
	
	if(a != b && b != c && a != c){ 
		printf("O triangulo e escaleno\n");
	}
					
}