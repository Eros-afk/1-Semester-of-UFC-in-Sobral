#include <stdio.h>
#include <ctype.h>

//Codigo bonito

int main(){
	char A[4][4];
	int a, b;
	int Up = 0;
	
	printf("\n==============MATRIZ 4x4==============\n");
	
	for(a=0; a<4; a++){
		for(b=0; b<4; b++){
			printf("\nDigite uma e apenas uma letra/valor para [%d][%d]: ", a+1, b+1);
			scanf(" %c", &A[a][b]);	
		}
	}
	
	printf("\n");
	
	for (a=0; a<4; a++)
	{
    	for (b=0; b<4; b++)
		{
     		if(isupper(A[a][b]))
			{
     			Up = 1;
     			break;
			}	
		}	
	}
	
	if(Up){
		printf("A matriz contem uma letra maiuscula.\n\n");
	}else{
		printf("A matriz nao tem letras maiusculas.");
	}
	
	for (a=0; a<4; a++){
    	for (b=0; b<4; b++){
    		if(Up){
    			printf("%4c\t", A[a][b]);
			}	
		}
		printf("\n");	
	}
	
	
}

