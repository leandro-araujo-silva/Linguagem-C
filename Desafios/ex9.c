#include <stdio.h>

int main ()
{
    float valor;
    float paga;

    scanf ("%f", &valor);

    paga = (valor * 1.1);

    printf ("%.2f", paga);

    return 0;
}