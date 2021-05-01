#include <stdio.h>
#include <stdlib.h>

double serie(int posicao, int adicao, int excluir, double valor1, double valor2, double resultado, int contagem) {
    if(contagem % 2 != 0) {
        valor1 += adicao;
        if(contagem != 0) {
            valor2 *= 2;
            resultado += valor2 / valor1;
            if(contagem < posicao-1) {
                serie(posicao, adicao+1, excluir, valor1, valor2, resultado, contagem+1);
            } else {
                return resultado;
            }
        } else {
            valor1 -= excluir;
            if(contagem != 0) {
                valor2 *= 2;
                resultado += valor1 / valor2;
                if(contagem < posicao - 1 && contagem != 0) {
                    serie(posicao, adicao, excluir+1, valor1, valor2, resultado, contagem+1);
                } else if(contagem < posicao-1) {
                    serie(posicao, adicao, excluir, valor1, valor2, resultado, contagem+1);
                } else {
                    return resultado;
                } 
            }
        }
    }
}

int main() {
    int posicao;

    scanf("%d", &posicao);

    double resultado = serie(posicao, 2, 0, 1, 1, 0, 0);

    printf("S: %.2lf\n", resultado);

    return 0;
}