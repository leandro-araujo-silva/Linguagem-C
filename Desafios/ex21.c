#include <stdio.h>

int main() {
    double salario;

    scanf("%lf", &salario);

    if(salario > 500.00) {
        printf("%.2lf", salario * 1.10);
    } else if (salario > 300.00 && salario <= 500.00) {
        printf("%.2lf", salario * 1.07);
    } else if (salario <= 300.00){
        printf("%.2lf", salario * 1.05);
    }

    return 0;
}