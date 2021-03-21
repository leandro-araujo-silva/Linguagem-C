#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf ("Testando acento: Ç, á, é, ã, í, \n\n");

    return 0;
}