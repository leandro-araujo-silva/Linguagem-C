#include <stdio.h>

int main () 
{
    int valor;
    int multlip;

    scanf ("%d", &valor);

    for (multlip = 1; multlip <= 9; ++multlip) {

        printf ("%d X %d = %d\n", valor, multlip, valor * multlip);
    }

    return 0;    
}

