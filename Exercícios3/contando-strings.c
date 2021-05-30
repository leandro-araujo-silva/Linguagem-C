#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char texto[50];
    int c, conta = 0;

    scanf("%s", texto);

    c = strlen(texto);

    printf("Numero de letras = %d", c);

    for(int i = 0; texto[i] != '\0'; i++) {
        if((texto ==' ') || (texto == '\n')) {
            conta++;
        }
    }

    printf("Conta = %d", conta);

    return 0;
}