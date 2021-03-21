#include <stdio.h>

int main () {
    double qnt, total, final, codigo;

    scanf("%lf%lf", &codigo, &qnt);

    if (codigo == 1) {
        codigo = 5.30;
    } else if (codigo == 2) {
        codigo = 6.00;
    } else if (codigo == 3) {
        codigo = 3.20;
    } else if (codigo == 4) {
        codigo = 2.50;
    }

    total = (codigo * qnt);

    if (total >= 40 || qnt >= 15) {
        final = total - (0.15 * total);
    } else {
        final = total;
    }

    printf("R$ %.2lf\n", final);

    return 0;
}