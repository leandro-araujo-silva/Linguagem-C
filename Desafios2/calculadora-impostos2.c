#include <stdio.h>

int main () {
    double dolar, aliquota, produto, frete;
    double conversao, valor_produto, valor_final, valor_frete, valor_total, II, icms, total_impostos, total_pagar, valor_total_s_impostos;

    scanf("%lf%lf%lf%lf", &dolar, &aliquota, &produto, &frete);

    conversao = dolar;

    valor_produto = produto * dolar;

    valor_frete = frete * dolar;

    valor_total = valor_produto + valor_frete;

    II = valor_total * 0.60;

    valor_final = (valor_total + II) / (1 - aliquota/100.0);

    icms = (valor_final * (aliquota/100.0));

    total_impostos = II + icms;

    total_pagar = valor_total + total_impostos;

    printf("Total a pagar: %.2lf\n", total_pagar);

    if (total_pagar < 2500.00) {
        printf("%.2lf\n", conversao);
        printf("%.2lf\n", valor_produto);
        printf("%.2lf\n", valor_frete);
        printf("%.2lf\n", valor_total);
        printf("%.2lf\n", II);
        printf("%.2lf\n", icms);
        printf("%.2lf\n", total_impostos);
        printf("%.2lf\n", total_pagar);
        printf("Impostos calculados com o frete"); 
      
    } else if (total_pagar >= 2500) {
        valor_total = valor_produto;

        II = valor_total * 0.60;

        valor_final = (valor_total + II) / (1 - aliquota/100.0);

        icms = (valor_final * (aliquota/100.0));

        total_impostos = II + icms;

        total_pagar = valor_total + total_impostos + valor_frete;

        printf("%.2lf\n", conversao);
        printf("%.2lf\n", valor_produto);
        printf("%.2lf\n", valor_frete);
        printf("%.2lf\n", valor_total + valor_frete);
        printf("%.2lf\n", II);
        printf("%.2lf\n", icms);
        printf("%.2lf\n", total_impostos);
        printf("%.2lf\n", total_pagar);  
        printf("Impostos calculados sem o frete");  
    }

    return 0;

}
