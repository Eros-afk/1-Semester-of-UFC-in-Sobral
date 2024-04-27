#include <stdio.h>

int main() {
    typedef struct{
        int matricula;
        char nome[40];
        float n[3], media;
    } aluno;
    
    int qnt=0;
    int i = 0, j = 0;
    int soma = 0;
    float media = 0;
    
	aluno v1;
    
    printf("Digite a matricula, o nome e a nota do aluno: \n");
    v1.matricula;
    v1.nome;
    v1.n;
    scanf("%d", &v1.matricula);
    fflush(stdin);
    scanf("%d", v1.nome);
    fflush(stdin);
    
    for(j=0; j<3; j++){
    	scanf("%f", &v1.n[j]);
    	fflush(stdin);
    	soma += v1.n[j];
	}
    
	v1.media;
	media = soma/3;
   
	v1.media = media;
   
	//printf("%.2f\n", v1.media);
   
	printf("O tamanho em bytes do tipo struct e: %lu\n", sizeof(aluno)); 
}
