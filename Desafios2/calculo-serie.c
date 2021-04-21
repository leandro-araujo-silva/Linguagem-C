#include <stdio.h>

int main() {
    double valor;
    double resultado;

    scanf("%lf", &valor);

    resultado = (1.0 + ((valor - 1.0) * (-1/3)));

    printf("%.2lf", resultado);

    return 0;
}