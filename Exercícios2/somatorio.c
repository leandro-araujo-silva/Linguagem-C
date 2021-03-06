#include <stdio.h>
#include <math.h>

int soma (int n)
{
    if (n == 0) {
        return 0;
    }

    return pow(2, n) + soma(n - 1); // Passo recursivo
}

int main()
{
    int n, res;

    scanf("%d", &n);

    res = soma(n);

    printf("Somatorio(%d) = %d\n", n, res);

    return 0;
}