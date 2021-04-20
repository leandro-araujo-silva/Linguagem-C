#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int quantidade;
    char tamanho;
    int professor[7];
    int total, qtd_xicara;

    for (int i = 0; i < 7; ++i) {
        scanf("%d%c", &quantidade, &tamanho);

        tamanho = getchar();

        if (tamanho=='p' || tamanho =='P') {
            professor[i] = quantidade * 10;
        } else if (tamanho=='g' || tamanho=='G') {
            professor[i] = quantidade * 16;
        }
    }

    total = professor[0] + professor[1] + professor[2] + professor[3] + professor[4] + professor[5] + professor[6];

    qtd_xicara = (total * 2) / 7; 

    printf("%d\n", total);
    printf("%d\n", qtd_xicara);

    return 0;
}