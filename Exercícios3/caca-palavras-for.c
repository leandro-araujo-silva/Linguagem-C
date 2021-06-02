#include <stdio.h>

void caca_palavra(int tam, char palavra[tam], int lin, int col, int matriz[lin][col]) {
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) {
            if(matriz[i][j] == palavra[0]) {
                int contador = 1;

                if(matriz[i][j + 1] == palavra[1]) {
                    for(int k = 1; k < tam; k++) {
                        if(matriz[i][j + k] == palavra[k]) contador++;
                        else break;
                    }

                    if(contador == tam) {
                        printf("%c%d\n", 65 + i, j + 1);
                        printf("%c%d\n", 65 + i, j + tam);
                        return;
                    }
                }
                else if(matriz[i + 1][j] == palavra[1]) {
                    for(int k = 1; k < tam; k++) {
                        if (matriz[i + k][j] == palavra[k]) contador++;
                        else break;
                    }

                    if(contador == tam) {
                        printf("%c%d\n", 65 + i, j + 1);
                        printf("%c%d\n", (64 + i) + tam, j + 1);
                        return;
                    }
                }
            }
        }
    }

    printf("0\n");
    return;
}

int main() {
    int tam;
    scanf("%d", &tam);
    
    char palavra[tam];
    scanf("%s", palavra);

    int lin, col;
    scanf("%d %d", &lin, &col);

    int matriz[lin][col];
    for(int i = 0; i < lin; i++)
        for(int j = 0; j < col; j++)
            scanf("%d", &matriz[i][j]);

    caca_palavra(tam, palavra, lin, col, matriz);

    return 0;
}