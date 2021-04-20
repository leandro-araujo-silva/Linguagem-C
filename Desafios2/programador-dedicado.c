#include <stdio.h>

int main() {
    int programas, linhas;
    int mediaP = 0, mediaL = 0;
    int dia[7];
    int maior = 0;

    for (int i = 0; i < 7; ++i) {
        scanf("%d%d", &programas, &linhas);

        if (programas >= 5) {
            mediaP += 1;
        }

        if (linhas >= 100) {
            mediaL += 1;
        }

        dia[i] = linhas;

        if (dia[i] > maior) {
            maior = dia[i];
        }
    }

    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", mediaP);
    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", mediaL);

    if (maior == dia[0]) {
        printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
    } else if (maior == dia[1]) {
        printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
    } else if (maior == dia[2]) {
        printf("DIA QUE MAIS PRODUZIU: TERÇA\n");
    } else if (maior == dia[3]) {
        printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
    } else if (maior == dia[4]) {
        printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
    } else if (maior == dia[5]) {
        printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
    } else if (maior == dia[6]) {
        printf("DIA QUE MAIS PRODUZIU: SABADO\n");
    }

    return 0;
}