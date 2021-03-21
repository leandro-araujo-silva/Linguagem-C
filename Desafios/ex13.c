#include <stdio.h>

int main ()
{
    int idade;
    int idseg;

    scanf ("%i", &idade);

    idseg = idade * 365 * 24 * 60 * 60;

    printf ("%i\n", idseg);

    return 0;
}