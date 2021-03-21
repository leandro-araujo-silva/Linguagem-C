#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int number1;
    int number2;
    int number3;
    int number4;
    int diferenca;

    scanf ("%i", &number1);
    scanf ("%i", &number2);
    scanf ("%i", &number3);
    scanf ("%i", &number4);

    diferenca = ((number1 * number2)-(number3 * number4));
    
    printf ("DIFERENCA = %.i", diferenca);

    return 0;
}