#include <stdio.h>

int funcPrimo(int a)
{
    int  i,  vezes = 0, valor;
    for (i = 1; i <= a && vezes <= 3; i++)               
    //for (i = 1; i <= num; i++)
    {    //5 / 1 = 5  resto = 0
        // 5 / 2 = 2  resto = 1
        // 5 / 3 = 1  resto = 2
        // 5 / 4 = 1  resto = 1
        // 5 / 5 = 1  resto = 0  
        if (a % i == 0)
        vezes ++;
    }
    
    if (vezes == 2)
    {
     valor = 1;
    }
    else  
    {
     valor = 0;
    }
    
    return valor;
}

main()
{
    // Declaração das Variáveis
    
    int  i,  num, primo;
       
    printf("*** Verifica se o n%cmero %c "
    "primo ***\n", 163, 130);
    printf("\nDigite um n%cmero inteiro: \n\n", 163);
    scanf("%d", &num);
    printf("\n\n\n");
     
    primo = funcPrimo(num);
        
    if (primo == 1)
    printf("\nO n%cmero %d %c primo.\n", 163, num, 130);
    else
    printf("O n%cmero %d n%co %c primo.", 163, num, 198, 130);
    
    
    printf("\n\n\n");
    
}