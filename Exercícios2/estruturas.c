#include <stdio.h>

int main(void) {
    struct horario {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;

    agora.horas = 16;
    agora.minutos = 40;
    agora.segundos = 30;

    printf("%d:%d:%d\n", agora.horas, agora.minutos, agora.segundos);
}