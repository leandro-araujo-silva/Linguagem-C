#include <stdio.h>

int main(void) {
    int x = 16;
    int y = 3;

    float resultado = (float)x / y;  //Vai sair um número inteiro, caso vc não coloque o float.

    printf("%.2f\n", resultado);

    return 0;
}