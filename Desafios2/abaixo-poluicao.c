#include <stdio.h>

int main() {
    int num1, multado = 0; 
    float valor_pagar = 0.0, pagamento;

    while (num1 >= 0) {
        printf("Digite a quantidade de veiculos: ");
        scanf("%d", &num1);
    
        if(num1 == 999) {
            pagamento = valor_pagar * 12.89;

            printf("%.2f\n", pagamento);
            printf("%d\n", multado);

            return 0;
        }
    
        if (num1 > 2) {
            multado += 1;
            valor_pagar += (num1 - 2);
        }
    }

    pagamento = valor_pagar * 12.89;

    printf("%.2f\n", pagamento);
    printf("%d\n", multado);

    return 0;
}