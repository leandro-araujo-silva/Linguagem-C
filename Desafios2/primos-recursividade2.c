#include <stdio.h>

int funcPrimo(int a)
{
    int  i, vezes = 0, valor;

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

int main()
{
    // Declaração das Variáveis
    
    int  i,  num, primo;

    while (num != -1) { 
       
        printf("Digite um n%cmero inteiro: \n", 163);
        scanf("%d", &num);

        
        if (num == -1) {
            return 0;
        }
        
        primo = funcPrimo(num);
            
        if (primo == 1) { 
            printf("1\n");
        } else { 
            printf("0\n");
        }

    }
    
    return 0;
}