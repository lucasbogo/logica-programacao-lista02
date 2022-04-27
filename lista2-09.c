#include <stdio.h>
#include <math.h>


int main()

{
	
	float num,cima,baixo;
	
	    printf("insira um numero real: ");
	    scanf("%f",&num);
	
	    baixo = floor(num);
	    printf("\nValor arredondado para baixo %f \n",baixo );
	
	    cima = ceil(num);
        printf("\nValor arredondado para cima %f \n",cima);
	
	
	return 0;

}
