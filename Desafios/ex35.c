#include <conio.h>
#include <stdio.h>

int main () {
    float litro, total, desc;
    char c;

    fflush(stdin);
    scanf("%c", &c);
    c = tolower(c);

    scanf("%f", &litro);

    if (c=='a' && litro <= 20) {
        total = (litro * 2.49);
        desc = (total * 3/100);
        total = total - desc;
        printf("R$ %.2f\n", total);
    }

    return 0;
}