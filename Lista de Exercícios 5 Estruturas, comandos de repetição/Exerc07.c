#include<stdio.h>

int main(){
	int n_mercadoria, a;
	float v_mercadoria, v_total = 0, m_valor;
	
	printf("Digite a quantidade das mercadorias:\n");
	scanf("%d", &n_mercadoria);
	
	for(a = 1; a <= n_mercadoria; a++){
		printf("Digite o valor das mercadorias %d: ", a);	
		scanf("%f", &v_mercadoria);
		v_total += v_mercadoria;
		}
	
	m_valor = v_total / n_mercadoria;
        
	printf("O valor total e: %.2f\n", v_total);
    printf("A media dos valores e: %.2f\n", m_valor);    


}
