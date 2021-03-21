#include <stdio.h>

int mult(int n) {
    if (n % 5 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main () {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (mult(n)){
        printf("O numero %d e multiplo de 5!\n", n);
    }
    else {
        printf("O numero %d nao e multiplo de 5!\n", n);
    }

    return 0;
}