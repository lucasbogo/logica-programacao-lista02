#include <stdio.h>

int main()
{
    float salariofixo,totalvendas,comissao,salariototal;

        printf("Entre com o salario fixo do vendedor: ");
        scanf("%f", &salariofixo);

        printf("Entre com o total de vendas do vendedor: ");
        scanf("%f", &totalvendas);
      
        comissao= totalvendas*0.15;
        salariototal= salariofixo+comissao;

        printf("comissao = R$ %.2f / salario fixo = R$ %.2f / salario final = R$ %.2f" ,comissao,salariofixo,salariototal);

return 0;
}