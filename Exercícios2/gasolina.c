#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void preco(float litro, char letra)
{
    double total;
    if(letra=='A' && litro<=20) {
        total=(litro*1.90)-((0.03*litro)*1.90);
    } else if(letra=='A' && litro>20) {
        total=(litro*1.90)-((0.05*litro)*1.90);
    }

    if(letra=='G' && litro<=20) {
        total=(litro*2.50)-((0.04*litro)*2.50);
    } else if(letra=='G' && litro>20){
        total=(litro*2.50)-((0.06*litro)*2.50);
    }

    if(letra=='D' && litro<=25) {
        total=(litro*1.66);
    } else if(letra=='D' && litro>25) {
        total=(litro*1.66)-((0.04*litro)*1.66);
    }

    printf("R$ %.2lf\n", total);
}

int main() {

    float n1;
    char l;

    scanf("%f %c", &n1, &l);
    
    preco(n1,l);

    return 0;
}