#include <stdio.h>

int fat(int n) {
    if (n == 0) {
        return 1;
    }

    return n * fat(n - 1);
}

int main () {
    int n;
    long res;

    scanf("%d", &n);

    if (n == -1) {
        return 0;
    }

    res = fat(n);

    printf("fat(%d) = %ld\n", n, res);

    return 0;
}