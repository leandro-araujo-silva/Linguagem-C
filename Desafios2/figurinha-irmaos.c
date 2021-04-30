#include <stdio.h>

int main() {
    int contador, serie;
    int fig[10000];
    int Sjoao = 0, Smaria = 0;
    int num_par = 0, num_imp = 0;

    scanf("%d", &contador);

    for(int i = 0; i < contador; ++i){
        scanf("%d", &fig[i]);

        if(fig[i] % 2 == 0) {
            Sjoao += fig[i];
            num_par += 1;
        } else {
            Smaria += fig[i];     //Olhar depois
            num_imp += 1;
        }
    }

    for(int j = 0; j < contador; j++) {
        if (fig[j] % 2 == 0 && fig[j] == fig[j+1]) {
            Sjoao -= fig[j];
        }

        if (fig[j] % 2 != 0 && fig[j] == fig[j+1]) {
            Smaria -= fig[j];
        }
    }

    printf("\n");

    printf("%d\n", num_par);
    printf("%d\n", num_imp);

    if(num_par >= num_imp) {
        printf("%d\n", Sjoao);
    } else {
        printf("%d\n", Smaria);
    }

    return 0;
}