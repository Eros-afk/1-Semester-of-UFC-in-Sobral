#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char string[100];
	char string2[100];
	int tam;
	int a;

    printf("Digite uma string: ");
        fgets(string, sizeof(string), stdin);
    
	tam=strlen(string);
	
	printf("String invertida: ");
    for (a=tam-2; a>=0; a--){
    printf("%c", string[a]);
    string2[tam -2 -a] = string[a];
  }
  
  	string2[tam - 1] = '\0';
  	
  	printf("\n");
  
  	strcpy(string, string2);
  
  	printf("A string invertida e: %s", string);
	
}

