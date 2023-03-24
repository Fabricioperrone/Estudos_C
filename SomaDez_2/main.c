#include <stdio.h>
#include <stdlib.h>

bool ePar ( int );

 int main(){
int i = 0, cont =0 ,soma = 0;
printf("\nOs selecionados: ");
for(i=1; i<100; i++){
    if(ePar(i)){
        soma = soma +i;
        cont++;
        printf("&d",i);}
    }
    if(cont==10){
        break;
    }
}
printf("n\A soma e d%\n: ", soma);
{
    system("pause");
    return 0;
}
bool ePar (int num){
if(num%2==0) {
    return true;
}else{
return false;
}
}
