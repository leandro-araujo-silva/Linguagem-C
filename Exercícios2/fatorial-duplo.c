#include <stdio.h>

int main () {

    int fatorial, fatorial2, fatorial3;
    int resposta = 1;
    int resposta2 = 1;
    int resposta3 = 1;

    scanf ("%d", &fatorial);
    scanf ("%d", &fatorial2);
    scanf ("%d", &fatorial3);

    for (fatorial; fatorial >= 1; --fatorial) {
        resposta *= fatorial;
    }

    for (fatorial2; fatorial2 >= 1; --fatorial2) {
        resposta2 *= fatorial2;
    }

     for (fatorial3; fatorial3 >= 1; --fatorial3) {
        resposta3 *= fatorial3;
    }

    if (fatorial == -1) {
        return 0;
    } else if (fatorial2 == -1) {
        printf ("%d\n", resposta);

        return 0; 
    } else if (fatorial3 == -1) {
        printf ("%d\n", resposta);
        printf("%d\n", resposta2);

        return 0;
    } else { 
        printf ("%d\n", resposta);
        printf("%d\n", resposta2);
        printf("%d\n", resposta3);

        return 0;
    }

    return 0;

}