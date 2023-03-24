#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, soma;
    printf("\nInsira um numero: \n");
    scanf("%d", &n1);
    printf("\nInsira um outro numero:\n");
    scanf("%d", &n2);
    soma = n1 + n2;

    printf("A soma da variaveis e: %d\n ", soma);

    system("pause");
    return 0;
}
