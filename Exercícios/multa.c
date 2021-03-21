#include <stdio.h>

int main () {
    float v_via, v_veiculo, excesso;
    float multa = 0;
    int pontos = 0;

    scanf("%f%f", &v_via, &v_veiculo);

    /* Percentual em que a velocidade do veículo ultrapassou a máxima */

    excesso = v_veiculo / v_via;

    // Multar apenas se a velocidade do veículo for superior ao da via

    if (excesso > 1) {
        if (excesso <= 1.2) {
            multa = 85.13;
            pontos = 4;
        }
        else if (excesso <= 1.5) {
            multa = 127.69;
            pontos = 5;
        }
        else {
            multa = 574.62;
            pontos = 7;
        }
    }

    printf("%.2f\n%d\n", multa, pontos);

    return 0;
}