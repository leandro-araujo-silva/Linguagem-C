#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () 
{
    float number1;
    float number2;
    float media;

    printf ("Digite o valor da ab1: ");
    scanf ("%f", &number1);

    printf ("Digite o valor da ab2: ");
    scanf ("%f", &number2);

    media = ((number1 * 3.5) + (number2 * 7.5)) / 11;

    printf ("Voce ficou com media: %.5f\n", media);

    return 0; 

}