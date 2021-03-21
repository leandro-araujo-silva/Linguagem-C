#include <stdio.h>

int main () {
    int valor;
    int pagamento;

    scanf("%d", &valor);

    if (valor >= 0 && valor <= 10) {
        pagamento = 7;
        printf("%d\n", pagamento);
    } 
    else if (valor > 10 && valor <= 30) {
        pagamento = ((valor - 10) * 1 + 7);
        printf("%d\n", pagamento);
    } 
    else if (valor > 30 && valor <= 100) {
        pagamento = ((valor - 30) * 2 + 27);
        printf("%d\n", pagamento);
    } 
    else if (valor >= 101) {
        pagamento = ((valor - 100) * 5 + 167);
        printf("%d\n", pagamento);
    }

    return 0;
}