#include <stdio.h>
#include <stdlib.h>


int euclides(int a, int d){
    int resto = a%d;
    if(resto != 0) {
        euclides(d, resto);
    } else {
        return d;
    }
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d\n", euclides(n1, n2));

    return 0;
}