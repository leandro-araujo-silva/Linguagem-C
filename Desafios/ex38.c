#include <stdio.h>

int main(){
    char A, B;
    int NA, NB;

    scanf("%c%c", &A, &B);
    scanf("%d%d", &NA, &NB);

    if (A == 'O' && NA == 1 && B == 'O' && NB == 2 || A == 'O' && NA ==1 && B == 'O' && NB == 3 || A == 'O' && NA == 1 && B =='P' && NB == 1) {
        printf("YES");
    } else if (A == 'O' && NA == 2 && B == 'O' && NB == 3 || A == 'O' && NA == 2 && B == 'P' && NB == 1 || A == 'O' && NA == 2 && B == 'P' && NB == 2 || A == 'O' && NA == 2 && B == 'O' && NB == 1) {
        printf("YES");
    } else if (A == 'O' && NA == 3 && B == 'P' && NB == 1 || A == 'O' && NA == 3 && B == 'P' && NB == 2 || A == 'O' && NA == 3 && B == 'P' && NB == 3 || A == 'O' && NA == 3 && B == 'O' && NB == 2 || A == 'O' && NA == 3 && B == 'O' && NB == 1) {
        printf("YES");
    } else if (A == 'P' && NA == 1 && B == 'P' && NB == 2 || A == 'P' && NA == 1 && B == 'P' && NB == 3 || A == 'P' && NA == 1 && B == 'P' && NB == 4 || A == 'P' && NA == 1 && B == 'O' && NB == 3 || A == 'P' && NA == 1 && B == 'O' && NB == 2 || A == 'P' && NA == 1 && B == 'O' && NB == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}