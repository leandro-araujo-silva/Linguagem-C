#include <stdio.h>

int absolute(int n) {
    if (n > 0) {
        return n;
    } else {
        return (n * -1);
    }
}

int main() {
    int valor, absoluto;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    absoluto = absolute(valor);

    printf("O valor absoluto de |%d| e %d\n", valor, absoluto);

    return 0;
}