#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int soma=0, valor=0;
    system("cls");
    do{
        printf("\n Digite um valor diferente de 0: ");
        scanf("%i", &valor);
        if(valor%2==0){
            soma+=valor;
            printf("\n A soma dos numeros pares e %i: ", soma);
        }
    }while(valor=!0);

}



