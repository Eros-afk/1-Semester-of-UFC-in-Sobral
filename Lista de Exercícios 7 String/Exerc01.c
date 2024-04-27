#include <stdio.h>

int main(){
    char string[100];
    printf("Digite uma string: ");
        fgets(string, sizeof(string), stdin);
    
    printf("A string digitada foi: %s", string);

}