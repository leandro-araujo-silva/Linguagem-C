#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int c = 2;
    int i, num;
    int divisiveis = 0;
    int divisores;

    scanf("%d", &num);

    for(i=2; i<((int)floor(sqrt(num)))+1; i++) {
        if(num % i == 0) {
            c += (num/i == i) ? 1 : 2; 

            printf("%d\n", i);

            if (i % 3 == 0) {
                divisiveis += 1;
            }
        
        }

        printf("%d\n", c);
        printf("%d\n", divisiveis);
    }

    printf ("numero de divisores e %d\n", c);
    printf ("Quantidade de divisiveis por 3: %d\n", divisiveis);

    return 0;
}