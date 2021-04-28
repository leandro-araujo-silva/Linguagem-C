#include <stdio.h>

int main() {
    char nome[20];
    char sobrenome[20];

    printf("Insira seu nome: ");
    scanf("%s", &nome);

    printf("Insira seu sobrenome: ");
    scanf("%s", &sobrenome);

    printf("Ola, %s %s", nome, sobrenome);

    return 0;
}