#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int valor;
    int ante;
    int suces;

    printf("Digite um numero: ");
    scanf("%i", &valor);

    ante = valor - 1;
    suces = valor + 1;

    printf ("%i %i", ante, suces);

    return 0;
} 