#include <stdio.h>

int main () {
    double salario, aumento, nsalario;
    int percentual;

    scanf ("%lf", & salario);

    if (salario <= 280.0) {
        percentual = 20;
        aumento = salario * 0.20;
        nsalario = salario * 1.20;
    } else if (salario <= 700.0){
        percentual = 15;
        aumento = salario * 0.15;
        nsalario = salario * 1.15;
    } else if (salario < 1500.0) {
        percentual = 10;
        aumento = salario * 0.10;
        nsalario = salario * 1.10;
    } else {
        percentual = 5;
        aumento = salario * 0.05;
        nsalario = salario * 1.05;
    }

    printf("%.2lf\n", salario);
    printf("%d\n", percentual);
    printf("%.2lf\n", aumento);
    printf("%.2lf\n", nsalario);

    return 0;
}