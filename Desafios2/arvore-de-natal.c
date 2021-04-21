#include <stdio.h>

int main() {
    double valor_arvore, total_gasto, valor_unitario;
    double valor_enfeite[3];
    int quantidade[3], pessoas = 21;

    scanf("%lf", &valor_arvore);

    for(int i = 0; i < 3; ++i) {
        scanf("%d%lf", &quantidade[i], &valor_enfeite[i]);
        total_gasto += quantidade[i] * valor_enfeite[i];
    }

    total_gasto += valor_arvore;
    valor_unitario = total_gasto / pessoas;
    
    printf("%.2lf\n", total_gasto);
    printf("%.2lf\n", valor_unitario);

    return 0;

}