#include<stdio.h>

int main(){
    int quant, i, j = 0, pares = 0, impares = 0, soma1 = 0, soma2 = 0, troca, aux;

    scanf("%d", &quant);

    int fig[quant];

    for(i = 0; i < quant; i++){
        scanf("%d", &fig[i]);

        if(fig[i] % 2 == 0){
              pares++;
              soma1 += fig[i];
        }

        else{
              impares++;
              soma2 += fig[i];
        }
    }
    
    for(i = 0; i<quant; i++){
        troca = 0;
             for(j = 0; j<quant-1; j++){
                   if(fig[j] > fig[j+1]){
                          aux = fig[j];
                          fig[j] = fig[j+1];
                          fig[j+1] = aux;
                          troca = 1;
                   }
             }

             if(troca == 0)
                    break;
    }
       
       i = 0;
        while(i < quant){
            if(fig[i] % 2 == 0 && fig[i] == fig[i+1])
                  soma1 -= fig[i];
                  
            if(fig[i] % 2 != 0 && fig[i] == fig[i+1])
                  soma2 -= fig[i];
                  
            i++;                        
        }
           
    printf("%d\n", pares);
    printf("%d\n", impares);
    
    if(soma1 > soma2)
        printf("%d\n", soma1);
          
    else
        printf("%d\n", soma2);  

    return 0;
}