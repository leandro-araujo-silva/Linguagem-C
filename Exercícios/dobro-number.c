#include <stdio.h>

int e_par(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main ()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (e_par(n)) {
        printf("O numero e %d; seu dobro e %d; e a sua metade e %d!\n", n, 2 * n, n / 2);
    }
    else {
        printf("O numero e IMPAR!\n", n);
    }

    return 0;
}