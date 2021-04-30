#include <stdio.h>
#include <stdlib.h>

double sequencia(int posicao, int soma, int subtrai, double valor1, double valor2, double total, int contador) {
    if(contador % 2 != 0) {
        valor1 += soma;
        if(contador != 0) {
            valor2 *= 2;
            total += valor2 / valor1;
            if(contador < posicao-1) {
                sequencia(posicao, soma+1, subtrai, valor1, valor2, total, contador+1);
            } else {
                return total;
            }
        } else {
            valor1 -= subtrai;
            if(contador != 0) {
                valor2 *= 2;
                total += valor1 / valor2;
                if(contador < posicao - 1 && contador != 0) {
                    sequencia(posicao, soma, subtrai+1, valor1, valor2, total, contador+1);
                } else if(contador < posicao-1) {
                    sequencia(posicao, soma, subtrai, valor1, valor2, total, contador+1);
                } else {
                    return total;
                } 
            }
        }
    }
}

int main() {
    int posicao;

    scanf("%d", &posicao);

    double resultado = sequencia(posicao, 2, 0, 1, 1, 0, 0);

    printf("S: %.2lf\n", resultado);

    return 0;
}