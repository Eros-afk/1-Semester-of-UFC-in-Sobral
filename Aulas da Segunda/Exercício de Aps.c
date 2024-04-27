#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, alunos=5, notas=3;
    float n[alunos][notas];
    int cont, alunos10=0;
    float soma, media;
    
    for(i=0; i<alunos; i++){
        printf("\nDigite a nota do aluno [%d]: \n", i+1);
        for(j=0; j<notas; j++){
            printf("Digite a nota %d: ", j+1);
            scanf("%f", &n[i][j]);
            if(n[i][j]==10){
            cont++;
            }
            soma+=n[i][j];
        }
    }
    
    int var;
    
    for(i=0; i<alunos; i++){
        var=0;
        for(j=0; j<notas; j++){
            if(n[i][j]==10){
                var=1;
            }
        }
        if(var==1){
            alunos10++;
        }
    }
	
	media = soma/5;
	
	printf("Tiveram %d alunos com nota 10\n", alunos10);
	printf("Tiveram %d notas 10\n", cont);
	printf("A media foi de %.2f", media);

}