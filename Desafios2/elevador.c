#include <stdio.h>

int main() {
    int leitura_sensor, capacidade;
    int saida, entrada, limite, excesso=0;

    scanf("%d%d", &leitura_sensor, &capacidade);

    for (int i = 0; i < leitura_sensor; ++i) {
        scanf("%d%d", &saida, &entrada);
        limite += entrada - saida;
        if (limite > capacidade) {
            excesso += 1;
        }
    }

    if (excesso == 0) {
        printf("N\n");
    } else {
        printf("S\n");
    }

    return 0;
}