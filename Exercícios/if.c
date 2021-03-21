#include <stdio.h>

int main () 
{
    float velocidade;
    printf("Valor da velocidade:\n");
    scanf("%f", &velocidade);

    if (velocidade > 60) {
        printf("Voce ultrapassou a velocidade permitida. Multado!");
    } else {
        printf("Esta tudo ok. Dirija com cuidado!");
    }

    return 0;
}