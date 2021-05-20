#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

void ler_inverso(char inverso[], int tamanho, int i) {
    if (tamanho < 0) {
        return;
    }

    inverso[i] = ;
    printf("O inverso eh: %s\n", inverso[i]);

    return ler_inverso(inverso, tamanho - 1, i);
}

*/

int main() {
    char texto[100], inverso[100];
    int f = 0;

    printf("Digite um texto: ");
    gets(texto);
    printf("Seu texto %c %s\n", 130, texto);

    printf("O tamanho %c %d\n", 130, strlen(texto));

    for (int i=strlen(texto)-1; i >= 0; i--) {
        inverso[f] = texto[i];
        f++;
    }
    
    inverso[f] = '\0';
    printf("O inverso eh: %s\n", inverso);

    if(strcmp(texto, inverso) == 0) {
        printf("%c um palindromo.\n", 144);
    } else {
        printf("N%co %c um palindromo.\n", 198, 130);
    }

    return 0;
}