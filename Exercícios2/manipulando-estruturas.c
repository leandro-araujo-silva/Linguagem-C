#include <stdio.h>

int main(void) {
    struct horario {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

    struct horario agora;

    agora.horas = 16;
    agora.minutos = 40;
    agora.segundos = 30;

    struct horario depois;

    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';

    printf("%d\n", depois.horas);
    printf("%d\n", depois.minutos);
    printf("%.2lf\n", depois.teste);
    printf("%c\n", depois.letra);

    return 0;
}