#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int number, letras;
    char texto[100], inverso[100];
    int f = 0;

    //printf("Digite um inteiro: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++) {
        f = 0;
        //printf("Quantidades de letras: \n");
        scanf("%d ", &letras);
        //printf("Digite o texto: \n");
        gets(texto);

        for (int j = strlen(texto)-1; j >= 0; j--) {
            inverso[f] = texto[j];
            f++;
        }

        inverso[f] = '\0';
        //printf("O inverso eh: %s\n", inverso);

        if(strcmp(texto, inverso) == 0) {
            printf("V\n");
        } else {
            printf("F\n");
        }
    }

    return 0;
}