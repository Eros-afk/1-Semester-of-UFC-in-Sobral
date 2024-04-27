#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char string[100];
	char string2[100];
	char *ptr = string;
	int  Ch = 0;
	
	printf("Digite uma string: ");
	fgets(string, sizeof(string), stdin);
	string[strcspn(string, "\n")] = '\0';
	
	printf("Digite a segunda string: ");
	fgets(string2, sizeof(string2), stdin);
	string2[strcspn(string2, "\n")] = '\0';
	
	while ((ptr = strstr(ptr, string2)) != NULL){
		Ch++;
		ptr += strlen(string2);
	}
	
	printf("A string2 esta contida %d vezes dentro da string.\n", Ch);

}

