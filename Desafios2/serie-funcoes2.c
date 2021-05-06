#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int eh_primo_i(int i, int x) {
    if(i > sqrt(x)) {
        return 1;
    }

    if(x % i == 0) {
        return 0;
    }

    return eh_primo_i(i + 1, x);
}

int eh_primo(int x) {
    return eh_primo_i(2, x);
}

int proximo_primo(int y) {
    if (eh_primo(y + 1) == 1) {
        return y + 1;
    }

    return proximo_primo(y + 1);
}

int fatorial(int z) {
    if(z == 0) {
        return 1;
    }

    if (z > 1) {
        return z * fatorial(z - 1);
    } 
}

int main() {
    int n;

    scanf("%d", &n);

    printf("fat(%d) = %d\n", n, fatorial(n));
    printf("eh_primo(%d) = %d\n", n, eh_primo(n));
    printf("Proximo_primo(%d) = %d\n", n, proximo_primo(n));

    return 0;
}