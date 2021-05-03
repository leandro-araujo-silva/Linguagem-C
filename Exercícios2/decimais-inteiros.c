#include <stdio.h>
#include <stdlib.h>

double conversao(double x) {
    int y = x;

    if (x / y == 1) {
        return x;
    } else {
        return y + 1;
    }
}

void loop(int n) {
    double valor;
    double valorD;

    if (n > 0) {
        printf("Digite um numero decimal: ");
        scanf("%lf", &valorD);

        valor = conversao(valorD);

        printf("O valor e %.1lf\n", valor);

        loop(n - 1);
    }

}

int main() {
    int n;
    
    printf("Digite o loop: ");
    scanf("%d", &n);

    loop(n);

    return 0;
}