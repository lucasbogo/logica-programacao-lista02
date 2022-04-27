#include <stdio.h>
#include <math.h>

int main()
{

    float numero,quadrado,cubo;

        printf("informe o numero a ser calculado: ");
        scanf("%f",&numero);

        quadrado = pow(numero,2);
        cubo = pow(numero,3);

        printf("\n\tnumero/quadrado/cubo\n\t ");
        printf("%f %f %f",numero,quadrado,cubo);

return 0;

}