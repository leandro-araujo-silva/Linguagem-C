#include <stdio.h>

void input(int i, int j, int lin, int col, int matriz[lin][col]) {
	if(i < lin) {
		if(j < col) {
			scanf("%d", &matriz[i][j]);

			input(i, j + 1, lin, col, matriz);
		}
		else input(i + 1, 0, lin, col, matriz);
	}
	else return;
}

int horizontal(int i, int j, int k, int tam, char palavra[tam], int lin, int col, int matriz[lin][col], int count) {
	if(k < tam) {
		if(matriz[i][j + k] == palavra[k]) count++;
		else return count;

		horizontal(i, j, k + 1, tam, palavra, lin, col, matriz, count);
	}
	else return count;
}

int vertical(int i, int j, int k, int tam, char palavra[tam], int lin, int col, int matriz[lin][col], int count) {
	if(k < tam) {
		if(matriz[i + k][j] == palavra[k]) count++;
		else return count;

		vertical(i, j, k + 1, tam, palavra, lin, col, matriz, count);
	}
	else return count;
}

void caca_palavra(int i, int j, int tam, char palavra[tam], int lin, int col, int matriz[lin][col]) {
	if(i < lin) {
		if(j < col) {
			if(matriz[i][j] == palavra[0]) {
				int count = 1;

				if(matriz[i][j + 1] == palavra[1]) {
					count = horizontal(i, j, 1, tam, palavra, lin, col, matriz, 1);

					if(count == tam) {
	                    printf("%c%d\n", 65 + i, j + 1);
	                    printf("%c%d\n", 65 + i, j + tam);
	                    return;
	                }
				}
				else if(matriz[i + 1][j] == palavra[1]) {
                    count = vertical(i, j, 1, tam, palavra, lin, col, matriz, 1);

                    if(count == tam) {
                        printf("%c%d\n", 65 + i, j + 1);
                        printf("%c%d\n", (64 + i) + tam, j + 1);
                        return;
                    }
                }
			}

			caca_palavra(i, j + 1, tam, palavra, lin, col, matriz);
		}
		else caca_palavra(i + 1, 0, tam, palavra, lin, col, matriz);
	}
	else {
		printf("0\n");
    	return;
	}
}

int main() {
    int tam;
    scanf("%d", &tam);
    
    char palavra[tam];
    scanf("%s", palavra);

    int lin, col;
    scanf("%d %d", &lin, &col);

    int matriz[lin][col];
    input(0, 0, lin, col, matriz);
    
    caca_palavra(0, 0, tam, palavra, lin, col, matriz);

    return 0;
}