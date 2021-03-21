#include <stdio.h>

int main ()
{
    int valor;

    printf ("Digite um numero natural: ");
    scanf ("%d", &valor);

    if (valor % 2 == 0) {
        printf("O numero %d e PAR!\n", valor);
    }
    else {
        printf("O numero %d e IMPAR!\n", valor);
    }

}