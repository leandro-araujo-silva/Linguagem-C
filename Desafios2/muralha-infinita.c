#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int movimentos, x=0, y=0, resultado=0;
    int qtd_moedas;
    char posicao;

    scanf("%d", &movimentos);

    if (movimentos == 0) {                 // Olhar depois
        qtd_moedas = 0;
    } 
    
    else {
        while (resultado < movimentos) {
            scanf("%c", &posicao);

            posicao = getchar();

            if (posicao=='D') {
                x += 1;
                resultado += 1;
            } else if (posicao=='C') {
                y += 1;
                resultado += 1;
            }
        }

        if (x == 0) {
            x = 1;
        } else {
            x = x - 1;  
        }

        qtd_moedas = (y - x);

        if (qtd_moedas == - 1) {
            qtd_moedas = 0;
        }

        if (qtd_moedas <= -2) {
            qtd_moedas = qtd_moedas * -1;
        }
    }

    printf("%d\n", qtd_moedas);

    return 0;
}


/*

 1 - C, Começa no lado C não paga nada
2 - D, Dá um passo pra D, logo tem um ponto em C e um em D, ele tá no meio, só que o lado atual ainda continua sendo C, ele só vai pagar se for pra D, se ele voltar pra C não paga
3 - C, Não paga pq ele tava no C, foi pro meio com um D e dps voltou pro C
4 - D, Aqui ele volta pro meio dnv já que D = C, e o lado atual continua o C, pq é o último lado q ele tava e ele tá no meio dnv
5 - D, Aqui ele paga pq ele saiu do C pro D
 Lembrando que a primeira entrada define o lado inicial
 e qnd ele volta pro ponto 0 e vai pro lado em que ele estava antes ele TB não paga
: ele só paga quando há inversão de lado

*/