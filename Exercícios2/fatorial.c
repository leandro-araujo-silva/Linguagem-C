#include <stdio.h>

int main ()
{
    int fatorial;
    int resposta = 1;

    printf ("Digite um numero: ");
    scanf ("%i", &fatorial);

    for (fatorial; fatorial >= 1; --fatorial) {
        resposta *= fatorial;
    }

    printf ("O fatorial e' %i\n", resposta);

    return 0;
}