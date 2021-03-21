#include <stdio.h>

int main() {
    double salario;
    double valorc;
    double valorm;

    scanf("%lf", &salario);
    scanf("%lf", &valorc);

    if (0.3 * salario > valorc) {
        valorm = (0.3 * salario) - valorc;
        printf("%.2lf", valorm);
    } else if (0.3 * salario <= valorc) {
        valorm = 0.00;
        printf("%.2lf", valorm);    
    }

    return 0;
}