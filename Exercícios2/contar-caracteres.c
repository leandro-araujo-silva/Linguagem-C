#include <stdio.h>

int tamanhoString(char string[]) {
    int numCaracteres = 0;

    while(string[numCaracteres] != '\0') {
        ++numCaracteres;
    }

    ++numCaracteres; // Para caracteres

    return numCaracteres;       
}

int main() {
    char stringUsuario[20];
    int qtd_strings;

    printf("Digite uma palavra (string):\n");
    scanf("%s", stringUsuario);

    qtd_strings = tamanhoString(stringUsuario);

    printf("A string %s possui %d caracteres.\n", stringUsuario, qtd_strings);

    return 0;
}