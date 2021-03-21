#include <stdio.h>

int main() {
    double problemas, resolucao;
    double percentual, aprovacao;
    char conceito;

    scanf("%d %d", &problemas, &resolucao);

    percentual = (resolucao / problemas) * (100.00);

    if (percentual >= 0.00 && percentual < 20.00) {
        percentual = percentual;
        aprovacao = 4.40;
        conceito = 'Pessimo';
    } else if (percentual >= 20.00 && percentual < 40.00){
        percentual = percentual;
        aprovacao = 31.65;
        conceito = 'Ruim';
    } else if (percentual >= 40.00 && percentual < 60.00) {
        percentual = percentual;
        aprovacao = 56.82;
        conceito = 'Bom';
    } else if (percentual >= 60.00 && percentual < 80.00) {
        percentual = percentual;
        aprovacao = 80.00;
        conceito = 'Muito Bom';
    } else if (percentual >= 80.00 && percentual <= 100.00) {
        percentual = percentual;
        aprovacao = 94.00;
        conceito = 'Excelente';
    }

    printf("%lf", percentual);

    return 0;
}