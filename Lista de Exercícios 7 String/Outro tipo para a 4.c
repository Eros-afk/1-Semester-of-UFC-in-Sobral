#include<stdio.h>
#include<string.h>
#include<stdlib.h>  //Biblioteca necess�ria para usar as fun��es strcpy e strlen
/*Autor: Ruben Alves do Nascimento
  Contato: rubenanapu@hotmail.com      
*/
main(){
    char string[50],auxiliar[50];
    int a,b;
       
       
       printf("Digite a frase que pretendes que invertida: ");
       
       
       gets(string);  //Armazena a frade na vari�vel string
       
       
       b=strlen(string)-1;    //strlen calcula a quantidade de caracteres que tem a string
       
       
       
       for(a=0;string[a]!='\0';a++){        //Repete enquanto nao chegar ao final da string
       auxiliar[b]=string[a];
       b--;     
       }
       
       
       auxiliar[a]='\0';      //Se nao colocar essa parte, o programa pode mostrar LIXO
       
       
       strcpy(string,auxiliar);    //Copia para a vari�vel string o conte�do da vari�vel auxiliar
       
       
       printf("\n\nA frase inversa e:\n%s\n\n",string);
}
