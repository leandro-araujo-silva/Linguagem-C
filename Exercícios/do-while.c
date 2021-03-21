#include <stdio.h>

int main ()
{
    int i = 0;

    while (i != 0) {          // Verifica primeiro a condição
        printf ("Teste\n");
    }

    do {                      // Executa pra depois verificar a condição
        printf ("Teste 2\n");
    } while (i != 0);

    return 0;
}