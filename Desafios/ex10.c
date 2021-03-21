#include <stdio.h>

int main ()
{
    float faren;
    float celsius;

    scanf ("%f", &faren);

    celsius = (faren - 32) * 5/9;

    printf ("%.2f\n", celsius);

    return 0;
}