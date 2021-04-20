#include <stdio.h>

int main() { 

    float problema, resolvido;
    float percentual;

    scanf("%f %f", &problema, &resolvido);

    percentual = (resolvido / problema) * 100.0;

    // printf("%.2f", percentual);

    if(percentual >= 1 && percentual < 20) {
        printf("%.2f%%", percentual);
        printf(" 4.40%%");
        printf(" Pessimo");
    } else if (percentual >= 20 && percentual < 40) {
        printf("%.2f%%", percentual);
        printf(" 31.65%%");
        printf(" Ruim");
    } else if (percentual >= 40 && percentual < 60) {
        printf("%.2f%%", percentual);
        printf(" 56.82%%");
        printf(" Bom");
    } else if (percentual >= 60 && percentual < 80) {
        printf("%.2f%%", percentual);
        printf(" 80.00%%");
        printf(" Muito Bom");
    } else if (percentual >= 80 && percentual <= 100) {
        printf("%.2f%%", percentual);
        printf(" 94.00%%");
        printf(" Excelente");
    }

    return 0;

}
