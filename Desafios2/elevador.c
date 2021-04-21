#include <stdio.h>

int main() {
    int leitura_sensor, capacidade;
    int saida[1000], entrada[1000], limite=0, excesso=0;

    scanf("%d%d", &leitura_sensor, &capacidade);

    for (int i = 0; i < leitura_sensor; ++i) {
        scanf("%d%d", &saida[i], &entrada[i]);
        limite = limite + entrada[i] - saida[i]; 
        if (limite > capacidade) {
            excesso += 1;
        }
        printf("%d\n\n", limite);
    }

    if (excesso == 0) {
        printf("N\n");
    } else {
        printf("S\n");
    }

    return 0;
}