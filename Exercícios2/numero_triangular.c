#include <stdio.h>

int main(void)
{
    int numero, i;
    int variavel_auxiliar = 0;

    scanf("%d",&numero);

    for(i = 1; i*(i+1)*(i+2)<=numero; i++) {

        if(i*(i+1)*(i+2) == numero) {
            variavel_auxiliar = 1;
        }
    }
    if (variavel_auxiliar) { 
        printf("%d * %d * %d = %d\n", i - 1, i, i + 1, numero);
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }               

    return 0;
}