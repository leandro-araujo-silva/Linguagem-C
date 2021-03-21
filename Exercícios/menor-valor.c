#include <stdio.h>

int menor (int n1, int n2, int n3) {
    int menor_valor = n1;
    if (n2 < menor_valor) {
        menor_valor = n2;
    }
    if (n3 < menor_valor) {
        menor_valor = n3;
    }

    return menor_valor;
}

int main () {
    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);
    printf("%d\n", menor(x, y, z));

    return 0;
}