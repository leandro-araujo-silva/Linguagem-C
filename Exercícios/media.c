#include <stdio.h>

int main () 
{
    int number1;
    int number2;
    int media;

    printf ("Digite o valor da ab1: ");
    scanf ("%i", &number1);

    printf ("Digite o valor da ab2: ");
    scanf ("%i", &number2);

    media = (number1 + number2) / 2;

    printf ("Voce ficou com media: %i\n", media);

    return 0; 

}