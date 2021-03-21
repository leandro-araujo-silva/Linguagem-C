#include <stdio.h>

int main () {
    float valor1, valor2, ganho;
    int x1, y1, x2, y2;
    int result1 = 0; 
    int result2 = 0;

    scanf("%f%f%d%d%d%d", &valor1, &valor2, &x1, &y1, &x2, &y2);

    if (x1 == 1 && y1 == 3 || x1 == 1 && y1 == 4 || x1 == 2 && y1 == 4 || x1 == 2 && y1 == 1 || x1 == 5 && y1 == 1 || x1 == 5 && y1 == 2 || x1 == 3 && y1 == 2 || x1 == 3 && y1 == 5 || x1 == 4 && y1 == 5 || x1 == 4 && y1 == 3) {
        printf("Rodrigo venceu a partida 1\n");
        result1 = result1 + 1;
    } else if (y1 == 1 && x1 == 3 || y1 == 1 && x1 == 4 || y1 == 2 && x1 == 4 || y1 == 2 && x1 == 1 || y1 == 5 && x1 == 1 || y1 == 5 && x1 == 2 || y1 == 3 && x1 == 2 || y1 == 3 && x1 == 5 || y1 == 4 && x1 == 5 || y1 == 4 && x1 == 3) {
        printf("Willy venceu a partida 1\n");
        result2 = result2 + 1;
    } else {
        printf("Empate\n");
    }

    if (x2 == 1 && y2 == 3 || x2 == 1 && y2 == 4 || x2 == 2 && y2 == 4 || x2 == 2 && y2 == 1 || x2 == 5 && y2 == 1 || x2 == 5 && y2 == 2 || x2 == 3 && y2 == 2 || x2 == 3 && y2 == 5 || x2 == 4 && y2 == 5 || x2 == 4 && y2 == 3) {
        printf("Rodrigo venceu a partida 2\n");
        result1 = result1 + 1;
    } else if (y2 == 1 && x2 == 3 || y2 == 1 && x2 == 4 || y2 == 2 && x2 == 4 || y2 == 2 && x2 == 1 || y2 == 5 && x2 == 1 || y2 == 5 && x2 == 2 || y2 == 3 && x2 == 2 || y2 == 3 && x2 == 5 || y2 == 4 && x2 == 5 || y2 == 4 && x2 == 3){
        printf("Willy venceu a partida 2\n");
        result2 = result2 + 1;
    } else {
        printf("Empate\n");
    }

    if (result1 > result2) {
        ganho = (valor1 + valor2) * 1.10;
        printf("Rodrigo foi o vencedor da aposta\n");
        printf("Valor ganho: R$%.2f\n", ganho);
    } else if (result2 > result1) {
        ganho = (valor1 + valor2) * 1.10;
        printf("Willy foi o vencedor da aposta\n");
        printf("Valor ganho: R$%.2f\n", ganho);
    } else {
        printf("Empate na aposta\n");
    }

    return 0;
}