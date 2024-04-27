#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i, j, ordem;
    char string[100];
    char string2[100];
    int Ch, Cj;
    
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    
    for(i=0; string[i] != '\0'; i++){
        string[i]=toupper(string[i]);
    }
    
    Ch=strlen(string);
    
    printf("Digite uma segunda string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0';
    
    for(j=0; string2[j] != '\0'; j++){
        string2[j]=toupper(string2[j]);
    }
    
    Cj=strlen(string2);
    
    
    if(Ch>Cj){
        printf("A string e maior que a string2 em %d caracteres\n", Ch-Cj);
    }else if(Ch==Cj){
        printf("A string e igual a string2 em %d caracteres\n", Ch-Cj);
    }else{
        printf("A string e menor que a em %d caracteres string2\n", Ch-Cj);
    }
    
    ordem=strcmp(string, string2); //A função strcmp compara duas strings e devolve um valor inteiro que lhe diz qual das strings vem antes no código ASCII. Que ngc mais específico.
    if(ordem<0){
        printf("A primeira string vem antes da segunda na ordem ortografica.\n");
    }else if (ordem>0){
        printf("A primeira string vem depois da segunda na ordem ortografica.\n");
    }else{
        printf("As duas strings sÃ£o iguais na ordem ortogrÃ¡fica.\n");
    }
}
