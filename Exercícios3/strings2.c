#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];

    printf("Digite uma palavra/texto: \n");
    gets(nome);           //Não recomendável usar

    printf("Seu texto: %s\n", nome);
    printf("Quantidade de letras: %d", strlen(nome));

    return 0;

}