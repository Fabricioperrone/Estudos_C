#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    do{
        menu();
        scanf("%d", &opcao);
        erroMenu(opcao);
    } while ((opcao < 1) ||(opcao > 5));

    opcao = opcao;

    switch(opcao)
    {
        case 1:atendente(); break;

            case 2:cliente(); break;

                case 3:incluir_excluir(opcao); break;

                    case 4:incluir_excluir(opcao); break;

                        case 5: bons estudos(); break;

    }
    system("pause");
    return 0;
}
