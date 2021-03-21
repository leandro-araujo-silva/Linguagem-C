#include <stdio.h>

int e_par(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main ()
{
    int n;
    scanf("%d", &n);

    if (e_par(n)) {
        printf("O numero %d e PAR!\n", n);
    }
    else {
        printf("O numero e IMPAR!\n", n);
    }

    return 0;
}