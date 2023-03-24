#include <stdio.h>
#include <stdlib.h>

void cliente(){

char nome[50];
char telefone[11];
char email[30];

printf("\n****************** Cadastro de cliente ******************\n\n\n");

printf("Digite o nome do Cliente; ");
scanf("%s", &nome);

printf("Digite o telefone do Cliente; ");
scanf("%s", &telefone);

printf("Digite o email do Cliente; ");
scanf("%s", &email);

printf("\n****************** Lendo os dados do CADASTRO *****************\n\n\n");

printf("********** Nome....: %s\n", nome);
printf("********** Telefone....: %s\n", telefone);
printf("********** Email....: %s\n", email);

printf("\n\n");
system("pause");
return 0;
}
