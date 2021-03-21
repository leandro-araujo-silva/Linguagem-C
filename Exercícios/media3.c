#include <stdio.h>

int main ()
{
    float number1;
    float number2;
    float number3;
    float media;

    printf ("Digite o primeiro valor: ");
    scanf ("%f", &number1);

    printf ("Digite o segundo valor: ");
    scanf ("%f", &number2);

    printf ("Digite o terceiro valor: ");
    scanf ("%f", &number3);

    media = (number1 + number2 + number3) / 3;

    printf ("Voce ficou com media: %.2f\n", media);

    if (media < 7) {
        printf("Voce esta reprovado!");
    } else {
        printf("Voce esta aprovado!");
    }

    return 0;
}