#include <stdio.h>

int main(){
    int verdadeiro = 0;
    double valor[5];
    double valor_desconto[5];

    for (int i = 0; i < 5; i++) {
        
        scanf("%lf%lf", &valor[i], &valor_desconto[i]);

        if(valor_desconto[i] <= ((80.0/100.0) * valor[i])) {
            verdadeiro += 1;
        }
    }

    printf("%d\n", verdadeiro);

    return 0;
}
