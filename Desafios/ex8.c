#include <stdio.h>

int main () 
{
    float number;
    float area;

    scanf ("%f", &number);

    area = (((number / 100) * (number / 100)) * 3.14159);

    printf ("Area = %.4f\n", area);

    return 0;
}