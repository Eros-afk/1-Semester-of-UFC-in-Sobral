#include <stdio.h>

int main(){
    typedef struct {
		char nome[100];
		int  idade;
	} valores;
	
	int qntp;
	int i;
	int cont;
	
	printf("Digite a quantidade de pessoas: ");
	scanf("%d", &qntp);
	fflush(stdin);
	
	valores v1[100];
	
	for(i=0; i<qntp; i++){
	    printf("\nA pessoa[%d]: ", i+1);
	    scanf("%s", &v1[i].nome);
	    fflush(stdin);
	    printf("A idade da pessoa: ");
	    scanf("%d", &v1[i].idade);
	    fflush(stdin);
	}
	
	for(i=0; i<qntp; i++){
	    if(v1[i].idade >= 18){
	        cont++;
	    }
	}
	
	printf("%d pessoas sao de maiores\n", cont);
	
	for(i=0; i<qntp; i++){
	    if(v1[i].idade >= 18){
	        printf("%s %d\n", v1[i].nome, v1[i].idade);
	    }
	}

}