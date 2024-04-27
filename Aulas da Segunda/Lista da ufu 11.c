#include <stdio.h>

typedef struct{
    char nome[30];
    int matri;
    float mediaf;
}aluno;

int main() {
    
    int i;
    aluno v1[4];
    
    
    for(i=1; i<=4; i++){
    printf("Digite o nome do aluno[%d]: ", i);
    scanf("%s", v1[i].nome);
    printf("Digite o matricula do[%d]: ", i);
    scanf("%d", &v1[i].matri);
    printf("Digite a media final do aluno[%d]: ", i);
    scanf("%f", &v1[i].mediaf);
    printf("%\n");
    }
    
    for(i=1; i<=4; i++){
        if(v1[i].mediaf>=5){
        printf("Aprovado o aluno[%d]: %f\n", v1[i].matri, v1[i].mediaf);
    }else{ printf("Reprovado o aluno[%d]: %f\n", v1[i].matri, v1[i].mediaf);
            }

    }   

}