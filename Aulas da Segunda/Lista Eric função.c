/*#include <stdio.h>
#include <stdlib.h>

int triangulo(float x, float y, float z){
	if(x < y + z && y < x + z && z < x + y){
		if(x == y && y == z){
			//printf("O triangulo e equilatero");
			return 0;
		} else if(x != y && y != z && x != z){
			//printf("O triangulo e escaleno");
			return 1;
			} else{
			//printf("O triangulo e isoceles");
			return 2;
			}
		} else{
			//printf("O triangulo nao e possivel");
			return -1;
		}
	} 

int main(){
	
	float x, y, z;
	
	printf("Digite os tres valores de lado para um triangulo: \n");
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);

	//triangulo(x, y, z); retornar o nome
	
	int a = triangulo(x, y, z);
	
	printf("\n%d", a);
	printf("legenda 0 = equilatero, 1 = escaleno, 2 = isoceles, -1 = nao e formavel");
}*/
