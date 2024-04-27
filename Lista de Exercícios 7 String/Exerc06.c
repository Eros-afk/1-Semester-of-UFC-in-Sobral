#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


    int main(){
    char string[100];
    char substituir;
    int vogais = 0;
    int i;
    
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
   
    printf("\nDigite uma caracter para substituir as vogais: ");
    scanf("%c", &substituir);
    
    for (i=0; string[i] != '\0'; i++){
    char Ch = tolower(string[i]);
    
    	if(Ch == 'a' || Ch == 'e' || Ch == 'i' || Ch == 'o' || Ch == 'u' || Ch == 'A' || Ch == 'E' || Ch == 'I' || Ch == 'O' || Ch == 'U'){
    vogais++;
    
    	string[i] = substituir;
    
    	}
    
    }
    
    printf("\nNova string: %s\n", string);
    printf("Numero de vogais: %d\n", vogais);
}
