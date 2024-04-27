#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Que ideia maluca foi essa do prof: "Subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122."

int main(){
    int i;
    char string[100];
    
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    
    for(i=0; string[i] != '\0'; i++){
        string[i]=toupper(string[i]);
    }

    printf("A string esta maiuscula: %s", string);
}
