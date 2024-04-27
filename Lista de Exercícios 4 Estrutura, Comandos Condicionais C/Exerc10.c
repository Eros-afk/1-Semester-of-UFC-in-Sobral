#include<stdio.h>

/*Achei bem bonito o codigo*/

int main(){
	float p1, n1, p2, n2, media;
	printf("Digite as notas do aluno:\n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	
	printf("Digite o peso das respectivas notas:\n");
	scanf("%f", &p1);
	scanf("%f", &p2);
	
	media = (p1*n1+p2*n2)/(p1+p2);
	
	if(media >= 7){
		printf("Aprovado\nCom uma nota de: %.2f", media);
	}
	
	if(media<7 && media>=4){
		printf("Ficou na final\nCom uma nota de: %.2f", media);
	} 
	
	if(media<4) {
		printf("Reprovado\nCom uma nota de: %.2f", media);
	}

}