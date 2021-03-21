#include <stdio.h>
#include <math.h>

int main () {
    double a, b, c;
    double delta, raiz, x1, x2;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (a == 0) {           
        printf("NEESG\n");
    } else {

        delta = ((b * b) - (4.0 * a * c));

        raiz = sqrt(delta);

        if (delta >= 0) {
            x1 = (-1.0 * b + raiz) / (2.0 * a);
            x2 = (-1.0 * b - raiz) / (2.0 * a);
            printf("%.2lf\n", x1);
            printf("%.2lf\n", x2);
        } else if (delta < 0) {
            printf("NRR\n");
        }
    }

    return 0;
}