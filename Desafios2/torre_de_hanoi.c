// Se for jogar com n = 1 só precisa realizar 1 movimento;
// Se for jogar com n = 2 só precisa realizar 3 movimentos;
// Se for jogar com n = 3 só precisa realizar 7 movimentos;
// Se for jogar com n = 4 só precisa realizar 15 movimentos;

// Onde está a recorrência no jogo?  n = x;  movimentos = 2(15) + 1

#include <stdio.h>

int hanoi(int discos) {
    if(discos <= 0) {
        return -1;
    } else if (discos == 1) {
        return 1;
    } else {
        return (2*hanoi(discos-1)) + 1;
    }
}

int main() {
    int discos, resultado;
    printf("Informe a quantidade de discos: ");
    scanf("%d", &discos);
    resultado = hanoi(discos);
    if(resultado == -1) {
        printf("Nao existe aplicacao do jogo com essa quantidade de discos!");
    } else {
        printf("A quantidade de movimentos para %d discos e %d", discos, resultado);
    }
    return 0;
}

