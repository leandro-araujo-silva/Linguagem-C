#include <stdio.h>
#include <stdlib.h>

int contaDigitosPares(int n) {
    int contador = 0;
    int digito = n % 10;
    if(n / 10 > 0) {
        contador = contaDigitosPares(n/10);
    } else if (n % 2 == 0) {
        return contador + 1;
    } else {
        return contador;
    }

    if (digito % 2 == 0) {
        return contador + 1;
    } else {
        return contador;
    }
}

int main() {
    int n1;
    scanf("%d", &n1);
    printf("%d", contaDigitosPares(n1));
    return 0;
}