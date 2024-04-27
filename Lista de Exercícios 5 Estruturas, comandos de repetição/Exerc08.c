#include <stdio.h>

int main() {
    float v_mercadoria, v_total = 0, m_valor;
    int n_mercadorias = 0;
    char op;

    for (;;) {
        printf("Digite a quantidade das mercadorias: ");
        scanf("%f", &v_mercadoria);

        v_total += v_mercadoria;
        n_mercadorias++;

        printf("Mais mercadorias (s/n)? ");
        scanf(" %c", &op);

        if (op == 'N' || op == 'n') {
            break;
        }
    }

    m_valor = v_total / n_mercadorias;

    printf("O valor total e: %.2f\n", v_total);
    printf("A media dos valores e: %.2f\n", m_valor);

}
