#include <stdio.h>

int main ()
{
    char nome;
    printf("Digite seu nome:\n");
    scanf("%c", &nome);

    printf ("E' um prazer te conhecer %c\n", nome);
}