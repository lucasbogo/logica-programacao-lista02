#include <stdio.h>


int main()
{
       float num1, num2, result;
            printf("Informar Valor pago pelo produto: ");
            scanf("%f", &num1);
            printf("Informar Valor total do produto: ");
            scanf("%f",&num2 );
            result= num1-num2;
            printf("Troco: R$ %.2f",result);


return 0;
}