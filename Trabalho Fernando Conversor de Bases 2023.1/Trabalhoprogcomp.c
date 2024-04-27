#include <stdio.h>

//Função para a conversão de decimal para binário
void deci_binario(int decimal) //Função void para realizar um processo e não retornar nada
{	
	//Caso o número digitado seja 0
	if(decimal == 0)
	{
		printf("Numero convertido para  binario: 0\n");	
		return;
	}
	//Caso o número digitado seja 1
	if(decimal == 1)
	{
		printf("Numero convertido para  binario: 1\n");		
		return;
	}
	
	int i = 0;
	int binario[33];
	
	//Função para o processo do seu blocod e comando se repetir enquanto a condição entre parênteses for verdadeira
	while(decimal > 0)
	{
		binario[i] = decimal % 2;//O vetor irá receber o resto da operação
		decimal = decimal / 2;//A variável decimal irá sofrer sucessivas divisões por 2 enquanto for maior que 0
		i++;//Irá somar-se +1 à variável i toda vez que o bloco de comando se repetir, para que os próximos espaaços do vetor sejam preeenchidos 
	}
	
	printf("Numero convertido: ");
	int j;
	
	//Imprimir o vetor invertido, pois ele armazena o contrário da conversão
	for(j = i - 1; j >= 0; j--)//O for irá percorrer o vetor de trás para frente
	{
		printf("%d", binario[j]);
	}
	
	printf("\n");
}

//Função para a conversão de decimal para octal
void deci_octal(int decimal)//Função void para realizar um processo e não retornar nada
{
	if(decimal == 0)
	{
		printf("Numero convertido para  binario: 0\n");		
		return;
	}
	if(decimal == 1)
	{
		printf("Numero convertido para  binario: 1\n");		
		return;
	}
	
	int i = 0;
	int octal[33];
	
	while(decimal > 0)
	{
		octal[i] = decimal % 8;
		decimal = decimal / 8;//A variável decimal irá sofrer sucessivas divisões por 8 enquanto for maior que 0
		i++;
	}
	
	printf("Numero convertido: ");
	int j;
	
	for(j = i - 1; j >= 0; j--)
	{
		printf("%d", octal[j]);
	}
	
	printf("\n");
}


int main()
{	
	int opcao, numero;
	char resp;
	
	do
	{
		printf("Numero voce deseja converter: ");
		scanf("%d", &numero);
		
		printf("\nQual conversao voce deseja realizar?\n");
		
		//Menu para saber a opção do usuário
		printf("1. De decimal para binario;\n2. De decimal para octal;\n3. De decimal para hexadecimal;");
		printf("\n4. De binario para decimal;\n5. De octal para decimal;\n6. De hexadecimal para decimal;\n");
	
		printf("\nOpcao: ");
		scanf("%d", &opcao);
		
		if(opcao == 1)
		{
			deci_binario(numero);
		} 
		else if(opcao == 2)
		{
			deci_octal(numero);
		} 
		else if(opcao == 3)
		{
		}
		else if(opcao == 4)
		{
		}
		else if(opcao == 5)
		{
		}
		else if(opcao == 6)
		{
		}
		else 
		{
			printf("Opcao invalida!");
		}
		
		//Pergunta para saber se o usuário gostaaria de continuar no programa
		printf("\nPara uma nova conversao tecle (S/s) e para finalizar pressione qualquer tecla: ");
		scanf(" %c", &resp); //Ler resp 
		fflush(stdin);//Limpar o buffer de entrada
		
		printf("\n");
		
	}while(resp == 's' || resp == 'S'); //Se a resposta bater o do continua
	
	return 0;
}
