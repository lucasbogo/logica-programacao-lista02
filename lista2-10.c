#include <stdio.h>
#include <math.h>


int main()

{
	float a,b,c,d,mh,mq;
	
	    printf("Inserir valor: ");
        scanf("%f",&a);
        printf("Inserir valor: ");
        scanf("%f",&b);
        printf("Inserir valor: ");         
        scanf("%f",&c);
        printf("Inserir valor: ");         
        scanf("%f",&d);

        mh = 4/((1/a) + (1/b) + (1/c) + (1/d));
        mq = sqrt((a*a + b*b + c*c + d*d)/4);
    
        printf("\nA media harmoica dos numeros informados eh': %.2f\n",mh);
        printf("\nA media quadratica dos numeros informados eh': %.2f\n",mq);

    return 0;
}