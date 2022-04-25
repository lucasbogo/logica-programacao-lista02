#include <stdio.h>
#include <stdlib.h>

int main()
{

    int v1,v2,aux;

        printf("informe o valor de v1: ");
        scanf("%d",&v1);

        printf("informe o valor de v2: ");
        scanf("%d",&v2);

        aux = v1;

        v1 = v2;

        v2 = aux;

        printf("v1 valor trocado = %d / v2 valor trocado = %d", v1,v2);

return 0;

}
