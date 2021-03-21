#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    int valor;

    scanf("%d", &valor);

    printf("A raiz e %d e %.2f\n", valor, sqrt(valor));

    return 0;
}