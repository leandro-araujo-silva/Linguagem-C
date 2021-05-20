#include <stdio.h>
#include <stdlib.h>

void main() {
    char letra1, letra2;

    printf("Digite um caracter: ");
    scanf("%c", &letra1);

    printf("Digite um caracter: ");
    scanf("%c", &letra2);

    printf("Letra1: %c\nLetra2: %c\n", letra1, letra2);

    return 0;
}