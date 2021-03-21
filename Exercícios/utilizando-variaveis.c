#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int minhaIdade;
    minhaIdade = 23;

    int maeIdade = 40;

    int paiIdade = 49;

    printf ("Minha idade e' = %i. Minha mae possui %i anos.\nJa o meu pai possui %i anos!\n", minhaIdade, maeIdade, paiIdade);

    return 0;
}