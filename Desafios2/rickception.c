#include <stdio.h>
#include <stdlib.h>

int rickception(n1, n2) {

    if (n1 == n2) {
        return n1;
    }

    while (n1 < n2) {
        return n1 + 3;
    }
     
}

int main() {
    int valor_ini, valor_base;

    printf("Escreva um numero: \n");
    scanf("%d %d", &valor_ini, &valor_base);

    printf("Rickception: %d\n", rickception(valor_ini, valor_base));
}