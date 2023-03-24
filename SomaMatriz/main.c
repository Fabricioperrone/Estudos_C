#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int matrizE[2][3] = { {0,3,6,},{8,4,2} };
    float matrizF[2][3] = { {2.2,1.6,2.6,},{0.4,3.1,6.4}};
    float resultado[2][3];



    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
        resultado[i][j] = matrizE[i][j] + matrizF[i][j];


    }
    printf("\n ***Primeira Matriz***\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",matrizE[i][j]);
        printf("\n");
    }

     printf("\n***Segunda Matriz***\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%.1f",matrizF[i][j]);
        printf("\n");
    }
printf("\n***A soma das Matrizes***\n");

     printf("\n ***Resultado***\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%.1f",resultado[i][j]);
        printf("\n");
    }






    system("pause");
    return 0;
}
