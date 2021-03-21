#include <stdio.h>

// o nome do parâmetro não tem vinculação com o nome da variável da main
int soma(int a, int b)
{
    return a + b;
}

int subtrair(int n1, int n2)
{
    return n1 - n2;
}

int multiplicar(int n1, int n2)
{
    return n1 * n2;
}

int dividir(int n1, int n2)
{
    return n1 / n2;
}

int resto(int n1, int n2)
{
    return n1 % n2;
}

int main()
{
    int n1, n2, resultado;

    n1 = 5;
    n2 = 2;

    // scanf("%d%d", &n1, &n2); // PRÓXIMOS CAPÍTULOS: ler do teclado

    printf("%d + %d = %d\n", n1, n2, soma(n1, n2));

    printf("%d - %d = %d\n", n1, n2, subtrair(n1, n2));

    printf("%d * %d = %d\n", n1, n2, multiplicar(n1, n2));

    printf("%d / %d = %d\n", n1, n2, dividir(n1, n2));

    printf("%d %% %d = %d\n", n1, n2, resto(n1, n2));

    return 0;
}