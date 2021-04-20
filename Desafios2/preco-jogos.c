#include <stdio.h>

double avaliacaoPreco(int x, double y) {
    double resultado;

    if(x == 0){
        resultado = (y * 0.75 * 0.75 * 0.75);  
    } else if (x == 1) {
        resultado = (y * 0.80 * 0.80 * 0.80);
    } else if (x == 2) {
        resultado = (y * 0.82 * 0.82 * 0.82);
    } else if (x == 3) {
        resultado = (y * 0.85 * 0.85 * 0.85);
    } else if (x == 4) {
        resultado = (y * 0.88 * 0.88 * 0.88);
    } else if (x == 5) {
        resultado = (y * 0.90 * 0.90 * 0.90);
    }

    return resultado;
}

double casoParticular(int x, double y) {
    double resultado;

    if(x == 0){
        resultado = (y * 0.875 * 0.875 * 0.875);  
    } else if (x == 1) {
        resultado = (y * 0.900 * 0.900 * 0.900);
    } else if (x == 2) {
        resultado = (y * 0.910 * 0.910 * 0.910);
    } else if (x == 3) {
        resultado = (y * 0.925 * 0.925 * 0.925);
    } else if (x == 4) {
        resultado = (y * 0.940 * 0.940 * 0.940);
    } else if (x == 5) {
        resultado = (y * 0.950 * 0.950 * 0.950);
    }

    if (resultado < 45.0) {
        resultado = 45.0;
    }

    return resultado;
}

int main() {
    int i, dificuldade;
    double preco;
    double valorFuturo;

    scanf("%d", &i);

    for(int j = 0; j < i; j++) {
        scanf("%d%lf", &dificuldade, &preco);

        if (preco >= 0.0 && preco < 45.0) {
            valorFuturo = preco;
        } 
        else if (preco >= 45.0 && preco <= 100.0) {
            valorFuturo = casoParticular(dificuldade, preco);
        } 
        else {
            valorFuturo = avaliacaoPreco(dificuldade, preco);
        }

        printf("Jogo[%d] = R$%.2lf\n", j, valorFuturo);

    }

    return 0;
}
