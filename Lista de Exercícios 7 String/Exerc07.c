#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string[100];
    int i, j;
    char palindromo = 1;
    
    
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    
    string[strcspn(string,"\n")] = '\0';
    
    
    for(i=0; string[i] != '\0'; i++){
        string[i] = tolower(string[i]);
    }
    
    i=0;
    j=strlen(string) -1;
    while(i < j){
        if(string[i] != string[j]){
            palindromo = 0;
            break;
    }
    
    i++;
    j--;
    
}

    if (palindromo) {
        printf("A string e um palindromo.\n");
    } else {
        printf("A string nao e um palindromo.\n");
    }

}
