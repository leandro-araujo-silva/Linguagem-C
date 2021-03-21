#include <stdio.h>

int main ()
{
    double number1;
    double number2;
    double number3;
    double media;

    scanf ("%lf", &number1);

    scanf ("%lf", &number2);

    scanf ("%lf", &number3);

    media = (number1 * 2.0 + number2 * 3.0 + number3 * 5.0) / 10.0;

    printf ("MEDIA = %.1lf\n", media);

    return 0;
}