#include <stdio.h>

int crescente(int n) 
{
    if (n == 1) {
        return 1;
    }

    int res = crescente(n - 1);

    printf("%d\n", res);

    return n;
}

int main()
{
    int n, res;
    scanf("%d", &n);

    res = crescente(n);

    printf("%d\n", res);
}