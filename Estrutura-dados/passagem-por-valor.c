#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y) {
    int z = x + y;

    puts("===> Função");
    printf("&x = %p, x = %d\n", &x, x); 
    printf("&y = %p, y = %d\n", &y, y);

    return z;

}

int main() {
    int a = 10;
    int b = 20;
    int c;

    puts("### Antes de chamar a função");
    printf("&a = %p, a = %d\n", &a, a); 
    printf("&b = %p, b = %d\n", &b, b); 
    printf("&c = %p, c = %d\n", &c, c); 

    c = soma(a, b);

    puts("## Depois de chamar a função");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b); 
    printf("&c = %p, c = %d\n", &c, c); 

    return 0;
}