#include <stdio.h>


int main()
{

    float valorcompra, valorprestacao;

        printf("digite o valor total da compra: ");
        scanf("%f",&valorcompra);

        valorprestacao = valorcompra/5;

        printf("\ncompra parcelada\n");
        printf("5 x de R$ %.2f = R$ %.2f", valorprestacao,valorcompra);

return 0;

}