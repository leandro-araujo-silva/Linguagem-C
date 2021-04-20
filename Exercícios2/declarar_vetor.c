#include <stdio.h>

int main(void) {
    int vetor[5] = {};

    vetor[4] = 9;

    for (int i = 0; i < 5; ++i) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}