#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, sorteio, tentativas=0;
    char c;
    srand(time(NULL));
    sorteio = rand() % 10;

    do {
        tentativas++;
        printf("Tentativa numero %d \n", tentativas);
        printf("Tente adivinhar o numero: ");
        scanf("%d", &num);

        if(num==sorteio) {
            printf("\nInacreditavel, voce acertou!\n");
            break;
        } else if (num < sorteio) {
            printf("\nErrou, o numero sorteado e maior!\n");
        } else if (num > sorteio) {
            printf("\nErrou, o numero sorteado e menor!\n");
        }

        printf("\nGostaria de tentar de novo? (S/N) \n");
        fflush(stdin);                                     //Estudar o buffer
        scanf("%c", &c);

        printf("\n");

    } while (c == 's' || c == 'S');

    return 0;
}