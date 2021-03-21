#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () {
    double qt_combustivel, valor_pago;
    char tipo;

    scanf("%lf%c", &qt_combustivel, &tipo);

    if (tipo == "A"){
        if (qt_combustivel <= 20.00) {
            valor_pago = (qt_combustivel * 1.90 * 0.97);
        }
        else {
            valor_pago = (qt_combustivel * 1.90 * 0.95);
        }
    } else if (tipo == "G") {
        if(qt_combustivel <= 20.00) {
            valor_pago = (qt_combustivel * 2.50 * 0.96);
        }
        else {
            valor_pago = (qt_combustivel * 2.50 * 0.94);
        }
    } else if (tipo == "D") {
        if(qt_combustivel <= 25.00) {
            valor_pago = (qt_combustivel * 1.66);
        }
        else {
            valor_pago = (qt_combustivel * 1.66 * 0.96);
        }
    }

    printf("R$ %.2lf\n", valor_pago);

    return 0;
}