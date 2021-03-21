#include <stdio.h>
int main () {
    int h, anos;

    scanf ("%d%d", &h, &anos);

    if (h == 0 && anos==1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
 } 