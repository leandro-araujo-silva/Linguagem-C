#include <stdio.h>

int main () {
    float valor1, valor2, ganho;
    float X1, Y1, X2, Y2;
    int result1 = 0; 
    int result2 = 0;

    scanf("%f%f%f%f%f%f", &valor1, &valor2, &X1, &Y1, &X2, &Y2);

    if (X1 == 1 && Y1 == 3 || X1 == 1 && Y1 == 4 || X1 == 2 && Y1 == 4 || X1 == 2 && Y1 == 1 || X1 == 5 && Y1 == 1 || X1 == 5 && Y1 == 2 || X1 == 3 && Y1 == 2 || X1 == 3 && Y1 == 5 || X1 == 4 && Y1 == 5 || X1 == 4 && Y1 == 3) {
        printf("Rodrigo venceu a partida 1\n");
        result1 = result1 + 1;
    } else if (Y1 == 1 && X1 == 3 || Y1 == 1 && X1 == 4 || Y1 == 2 && X1 == 4 || Y1 == 2 && X1 == 1 || Y1 == 5 && X1 == 1 || Y1 == 5 && X1 == 2 || Y1 == 3 && X1 == 2 || Y1 == 3 && X1 == 5 || Y1 == 4 && X1 == 5 || Y1 == 4 && X1 == 3) {
        printf("Willy venceu a partida 1\n");
        result2 = result2 + 1;
    } else {
        printf("Empate\n");
    }

    if (X2 == 1 && Y2 == 3 || X2 == 1 && Y2 == 4 || X2 == 2 && Y2 == 4 || X2 == 2 && Y2 == 1 || X2 == 5 && Y2 == 1 || X2 == 5 && Y2 == 2 || X2 == 3 && Y2 == 2 || X2 == 3 && Y2 == 5 || X2 == 4 && Y2 == 5 || X2 == 4 && Y2 == 3) {
        printf("Rodrigo venceu a partida 2\n");
        result1 = result1 + 1;
    } else if (Y2 == 1 && X2 == 3 || Y2 == 1 && X2 == 4 || Y2 == 2 && X2 == 4 || Y2 == 2 && X2 == 1 || Y2 == 5 && X2 == 1 || Y2 == 5 && X2 == 2 || Y2 == 3 && X2 == 2 || Y2 == 3 && X2 == 5 || Y2 == 4 && X2 == 5 || Y2 == 4 && X2 == 3){
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