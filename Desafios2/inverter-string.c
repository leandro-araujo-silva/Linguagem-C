#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main() {
    char texto[255], inverso[255];
    int tamanho;
    int p = 0;

    printf("Digite uma palavra: ");
    gets(texto);                     //Ler a string

    tamanho = strlen(texto);       //Pegar o tamanho da palavra

    printf("A palavra tem %d letras.\n", tamanho);

    for (int i = tamanho - 1; i >= 0; i--) {          //Encontrar o inverso
        inverso[p] = texto[i];
        p++;
    }
    
    inverso[p] = '\0';

    printf("Seu inverso: %s\n", inverso);

    if(strcmp(texto, inverso) == 0) {                 //Determinar se e um palindromo
        printf("A palavra e um palindromo.\n");
    } else {
        printf("A palavra nao e um palindromo.\n");
    }

    return 0;
}
