#include <stdio.h>

int main () {
    int a, x, b, m, valor_a;

    printf("Digite um valor a: ");
    scanf("%d", &a);

    printf("Digite um valor x, no qual vai ser multiplicado por a: ");
    scanf("%d", &x);

    printf("Digite um valor b: ");
    scanf("%d", &b);

    printf("Digite um valor m: ");
    scanf("%d", &m);

    printf("\n");

    valor_a = a * x;

    if ((valor_a - b) % m == 0) {
        printf("%d e congruente a %d, modulo %d\n", valor_a, b, m);
    } else {
        printf("%d nao e congruente a %d, modulo %d\n", valor_a, b, m);
    }

    return 0;
}