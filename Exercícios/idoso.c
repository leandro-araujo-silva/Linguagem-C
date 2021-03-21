#include <stdio.h>

int e_idoso(int idade) {
    if (idade >= 60) {
        return 1;
    }
    else {
        return 0;
    }
}

int main ()
{
    int idade;
    printf("Quantos anos voce tem? ");
    scanf("%d", &idade);

    if (e_idoso(idade)) {
        printf("Voce tem %d anos e possui acesso gratuito!\n", idade);
    }
    else {
        printf("Voce tem %d anos e nao possui acesso gratuito!\n", idade);
    }

    return 0;
}