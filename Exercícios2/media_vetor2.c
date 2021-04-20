#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4;
    int notas[4] = {};
    float total = 0;
    double media;

    printf("Insira 4 notas:\n");

    for (int i = 0; i < 4; ++i) {
        scanf("%d", &notas[i]);
    }

    for (int i = 0; i < 4; ++i) {
        total += notas[i];
    }

    media = total / 4.0;

    printf("A media do aluno foi %.1lf\n", media);

    return 0;
}