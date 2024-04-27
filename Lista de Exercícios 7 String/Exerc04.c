#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char string[100];
	char string2[100];
	int tam;
	int a;
	char issuper;
	
    printf("Digite uma string: ");
        fgets(string, sizeof(string), stdin);
    
	tam=strlen(string);

    for (a=tam-1; a>=0; a--){
    	printf("%c", string[a]);
  }
  printf("\n");
  
  a = 0;
  while(string[a] != '\0'){
  	string2[a] = toupper(string[a]);
  	a++;
  }
  string2[a]= '\0';
  
  printf("\nString maiuscula: %s\n", string2);
}

