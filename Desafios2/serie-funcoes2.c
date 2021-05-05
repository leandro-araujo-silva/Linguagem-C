#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int eh_primo(int i, int x) {
    if(x % i == 0) {
        return 0;
    }

    return eh_primo(i + 1, x);
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

    printf("fat(%d) = %d\n", n , fatorial(n));
    printf("eh_primo(%d) = %s\n", n, eh_primo(2, n));

    return 0;
}