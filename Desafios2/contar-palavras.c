#include <stdio.h>
#include <string.h>

void escanear(char array[], int resultado) {
    if(scanf("%s", array) != EOF) {
        resultado++;
        escanear(array, resultado);
    } else {
        printf("%d", resultado);
    }
}

int main() {
    char array[500];

    escanear(array, 0);
    
    return 0;
}
