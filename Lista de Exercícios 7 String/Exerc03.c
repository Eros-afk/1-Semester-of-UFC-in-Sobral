#include <stdio.h>
#include <string.h>


    int calcular(const char *string){
    int comp = 0;
    while(string[comp] != '\0'){
        comp++;
        }
    return comp;
}

int main(){
    char s[100];
    printf("Digite uma string: ");
    scanf("%s", s);
    int  tamanho = calcular(s);
    
    printf("\nO tamanho da string digitada foi: %d", tamanho);

}    