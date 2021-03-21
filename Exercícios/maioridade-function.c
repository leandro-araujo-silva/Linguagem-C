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
    int idade;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    if (maior(idade) == 1) {
        printf("Maior de idade\n");
    }
    else {
        printf("Menor de idade\n");
    }

    return 0;
}