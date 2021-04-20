#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int eh_primo_i(int i, int x)
{
    if (i > sqrt(x))
    {
        return 1;
    }

    if (x % i == 0)
    {
        return 0;
    }

    return eh_primo_i(i + 1, x);
}

int eh_primo(int x)
{
    return eh_primo_i(2, x);
}

int proximo_primo(int y)
{
    if (eh_primo(y + 1) == 1)
    {
        return y + 1;
    }

    return proximo_primo(y + 1);
}

int fatorial(int z)
{
    if (z > 1)
    {
        return z * fatorial(z - 1);
    }
    
    return (z == 0) ? 1 : z;
}

void imprimir_termo(int i)
{
    printf("%d!/%d", i, proximo_primo(i - 1));
}

void imprimir_serie(int i, int n)
{
    imprimir_termo(i);

    if (i == n)
    {
        printf("\n");
    }
    else
    {
        printf(" + ");
    }
}

double termo(int i)
{
    return (double) fatorial(i) / proximo_primo(i - 1);
}

void loop(int i, int n, double soma)
{
    if (i <= n)
    {
        imprimir_serie(i, n);
        soma += termo(i);

        loop(i + 1, n, soma);
    }
    else
    {
        printf("%.2lf\n", soma);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    loop(1, n, 0.0);

	return 0;
}