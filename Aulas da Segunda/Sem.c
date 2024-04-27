#include <stdio.h>

int main(){
	int count;
    int maior, menor;

    printf("Digite 2 numeros:\n");
    scanf("%d", &menor);
    scanf("%d", &maior);

    for( count = menor+1; count < maior; count++){
    	if((count%2 == 0) && (count>10)){
    	printf("%d ", count);
    	}
	}
}

