#include <stdio.h>
#include <stdlib.h>

int main() {
    
    printf("Gerando 10 valores aleatorios\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", rand() % 100);
    }

    return 0;
}