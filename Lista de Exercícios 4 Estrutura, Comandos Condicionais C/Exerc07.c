#include<stdio.h>

int main(){
	int a, b;
	printf ("Digite dois numeros:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	a%b;  
	
	if(a%b == 0){
		printf("SAO DIVISIVEIS\n");
	} else{
		printf("NAO SAO DIVISIVEIS\n");
	}
}
