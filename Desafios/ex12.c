#include <stdio.h>

int main ()
{
    int number;
    int hora;
    float valor;
    float salario;

    scanf ("%i", &number);
    scanf ("%i", &hora);
    scanf ("%f", &valor);

    salario = hora * valor;

    printf("NUMBER = %i\n", number);
    printf("SALARY = R$%.2f\n", salario);

    return 0;
}