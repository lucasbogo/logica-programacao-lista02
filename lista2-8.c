#include <stdio.h>  
 

int main()  
{  
    int num, soma=0;  

    
        printf("entre com valor de quatro digitos: ");  
        scanf("%d", &num);  

    
            while(num!=0)  
            {  
             soma += num % 10;

             num = num / 10;  
             }  

        printf("\nA soma dos digitos informados = %d", soma);  

    return 0;  
}
