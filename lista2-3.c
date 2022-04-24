#include <stdio.h>

    
int main()
{
	
    float nota1, nota2, nota3, media;

        printf("Inserir nota 1: ");
        scanf("%f",&nota1);
        printf("Inserir nota 2: ");
        scanf("%f",&nota2);
        printf("Inserir nota 3: ");         
        scanf("%f",&nota3);

        media = (nota1 + nota2 + nota3) / 3;

        printf("media do aluno: %.2f",media);

return 0;

}
      