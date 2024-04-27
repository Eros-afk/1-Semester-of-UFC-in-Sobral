#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int matri;
	char nome[30];
	int codgdd;
	float nota1;
	float nota2;
	float soma;
	float media;
}aluno;



int main(){
	int i;
	//float media[2];
	//float soma[2];
		
	aluno v1[10];
	
	printf("Digite a notas dos 10 alunos:\n\n");
	
	for(i=1; i<=10; i++){
		printf("Digite a matricula do aluno[%d]: ", i);
		scanf("%d", &v1[i].matri);
		printf("Digite o nome do aluno[%d]: ", i);
		scanf("%s", &v1[i].nome);
		printf("Digite o codigo da disciplina: ");
		scanf("%d", &v1[i].codgdd);
		printf("Digite a nota 1 do aluno[%d]: ", i);
		scanf("%f", &v1[i].nota1);
		printf("Digite a nota 2 do aluno[%d]: ", i);
		scanf("%f", &v1[i].nota2);
		
		v1[i].soma = v1[i].nota1*1 + v1[i].nota2*2;
		
		v1[i].media = v1[i].soma/3.0;
		
		printf("%f", v1[i].media);
		
		printf("\n\n");
	}
	
	for(i=1; i<=10; i++){
		printf("Matricula do aluno[%d]: %d\n", i, v1[i].matri);
		printf("Nome do aluno[%d]: %s\n", i, v1[i].nome);
		printf("Codigo da disciplina: %d\n", v1[i].codgdd);
		printf("Nota1 do aluno[%d]: %.2f\n", i, v1[i].nota1);
		printf("Nota2 do aluno[%d]: %.2f\n", i, v1[i].nota2);
		printf("Media do aluno[%d]: %.2f\n\n", i, v1[i].media);
	}
	
	//system("pause");
}

