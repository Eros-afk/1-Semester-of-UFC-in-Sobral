#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>

/* Ngc chato */

int main(){
	setlocale(LC_ALL, "portuguese");
	int a, v = 0, valor;
	char palavra[1000], invertida[1000];
	
	printf("\nDigite uma palavra: ");
	gets(palavra);
	
	for(a=0; palavra[a]; a++){
		palavra[a] = toupper(palavra[a]);
	} 
	
	strcpy(invertida, palavra);
	
	strrev(invertida);
	
	valor = strcmp(palavra, invertida);
	
	if(valor == 0){
	printf("\nA palavra %s é palíndroma\n", palavra);}
	else{printf("\nA palavra %s não é palíndroma\n", palavra);
	}

}

