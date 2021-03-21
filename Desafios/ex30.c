#include <stdio.h>

int main () {
    int level, potencia;

    scanf("%d", &level);

    if(level >= 1 && level <= 20) {
        potencia = (level * level * level) + 20;
    } else if (level > 20 && level <= 40) {
        potencia = ((level - 10) * (level - 10)) + 8000;
    } else if (level > 40 && level <= 60) {
        potencia = (5 * level) + 9000;
    } else if (level > 60 && level <= 80) {
        potencia = (2 * level) + 9300;
    } else if (level > 80 && level <= 100) {
        potencia = 9500 + level;
    }

    printf("Potencia de : %d W\n", potencia);

    return 0;
}