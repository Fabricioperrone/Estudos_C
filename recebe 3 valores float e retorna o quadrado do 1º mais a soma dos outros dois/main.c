#include <stdio.h>
#include <stdlib.h>

#include<string.h>
#include<math.h>
float calcula (float x, float y, float z)
 {
 return (pow(x,2)+(y+z));
 }
main()
{
 int x, y, z;
 float vet[3];
 printf("\nDigite um numero: ");
 scanf("%d",&x);
 printf("\nDigite um numero: ");
 scanf("%d",&y);
 printf("\nDigite um numero: ");
 scanf("%d",&z);
 printf("\n\nO Resultado e: %3.2f\n", calcula(x,y,z));
 printf("\n\n");
 printf("%f\t",vet[0]);
 scanf("%f",&vet[x]);
 printf("%f\t",vet[1]);
 scanf("%f",&vet[x]);
 printf("%f\t",vet[2]);
 scanf("%f",&vet[x]);
 printf("\n\nO Resultado e: %3.0f\n",   calcula(vet[0],vet[1],vet[2]));
 printf("\n\n");
 system("pause");
 return(0);
}
