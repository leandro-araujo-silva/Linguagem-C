#include <stdio.h>

int maior(int idade)
{
    if (idade >= 18) {
        return 1;
    }
    else {
        return 0;
    }
}

int main () 
{
    int idade, herois;
    int ingresso = 10;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Prefere (1) Marvel, (2) DC ou (3) Nao tenho preferencia. (OBS: digite o numero correspondente.)\n");
    scanf("%d", &herois);

    if (maior(idade) == 1) {
        printf("Maior de idade\n");
    }
    else {
        printf("Menor de idade\n");
    }

    if (herois == 1 || herois == 2) {
        ingresso = 20;
    }

    printf("O valor do ingresso e %d\n", ingresso);

    return 0;
}                           