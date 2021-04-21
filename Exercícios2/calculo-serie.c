#include <stdio.h>
#include <stdlib.h>

float serie(int n) {
    if (n > 0) {
        return (1 + (n*n))/(float)n + serie(n-1);
    } else {
        return 0;
    }
}

int main() {
    int valor;

    scanf("%d", &valor);

    printf("S = %.2f\n", serie(valor));

    return 0;
}