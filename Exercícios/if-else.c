#include <stdio.h>

int main () 
{
    int idade;

    printf("Por favor, informar a idade:\n");
    scanf("%i", &idade);

    if (idade < 18) {
        printf("Bebidas alcoolicas nao estao liberadas.\n");
    } 
    
    else {
        printf("Fique a vontade para beber!\n");
        printf("Mas nao pegar ao volante!\n");
    }

    return 0;
}