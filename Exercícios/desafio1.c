#include <stdio.h>

int main ()
{
    int num1 = 5;
    int num2 = 4;
    int soma = num1 + num2;
    int subtrair = num1 - num2;
    int multi = num1 * num2;
    float dividir = num1 / num2;
    int resto = num1 % num2;


    printf ("A soma: %.i\n", soma);   
    printf ("A subtracao: %.i\n", subtrair); 
    printf ("A multiplicacao: %.i\n", multi);
    printf ("A divisao: %.f\n", dividir);
    printf ("O resto da divisao: %.i\n", resto);

    return 0;
}