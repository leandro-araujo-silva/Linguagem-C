#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char texto[50];
    int c, conta = 0;

    fgets(texto, 150, stdin);

    c = strlen(texto);

    printf("Numero de letras = %d\n", c);

    for(int i = 0; texto[i] != '\0'; i++) {
        if (texto ==' '){
            ++conta;
        }
    }

    printf("Conta = %d\n", conta+1);

    return 0;
}