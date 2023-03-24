#include <stdio.h>
#include <stdlib.h>

int main()
{
   int soma, i, count;
   count=1;
   i=1;
   while(count=10){
    if(i%2==0){
        printf("%d e par\n: ",i);
        soma = soma + i;
        count++;
        i++;
    }
    printf("Soma dos dez numeros pares: %d\n", soma);
   }






    system("pause");
    return 0;
}
