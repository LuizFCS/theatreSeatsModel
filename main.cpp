#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    unsigned int lin = 5, col = 5;
    int opc;
    unsigned int choose, clin, ccol;
    cout << "TEATRO -- ASSENTOS:" << endl;

    Teatro a(lin, col);

    while(1)
    {
        cout << endl;
        cout << " --------------------------- " << endl;
        cout << "PESSOAS RESERVADAS NO TEATRO: " << a.cont << endl;
        cout << "ESCOLHA UMA OPCAO: " << endl;
        cout << "1 - RESERVAR ASSENTO" << endl;
        cout << "2 - CANCELAR RESERVA" << endl;
        cout << "3 - EXIBIR ASSENTOS" << endl;
        cout << "9 - SAIR" << endl;
        cout << " --------------------------- " << endl;
        cout << "--> ";
        cin >> opc;
        switch(opc)
        {
            case 1:
                for(int i = 0; i < 10; i++)
                    cout << endl;
                cout << "ESCOLHA UM ASSENTO PRA RESERVA: -->";
                cin >> choose;

                a.escolha = choose - 1;
                if(a.teatro[a.escolha] == true)
                {
                    cout << "ASSENTO JÁ RESERVADO." << endl;
                }
                else
                {
                    a.inserir(a.escolha);
                }
                break;

            case 2:
                for(int i = 0; i < 10; i++)
                    cout << endl;
                cout << "ESCOLHA UM ASSENTO PRA DEIXAR A RESERVA: -->";
                cin >> choose;
                a.escolha = choose - 1;
                if(a.teatro[a.escolha] == false)
                {
                    cout << "ASSENTO JÁ DELETADO." << endl;
                }
                else
                {
                    a.remover(a.escolha);
                }

                break;

            case 3:
                for(int i = 0; i < 10; i++)
                    cout << endl;
                cout << "ASSENTOS RESERVADOS: " << endl;
                cout << "detalhes: X = assento reservado" << endl;
                for(int i = 0; i < (lin*col); i++)
                {
                    if(a.teatro[i] == false) // verificar se a lista ta vazia
                    {
                        cout << (i + 1) << "  ";
                    }
                    else
                    {
                        cout << "X ";
                    }
                    cout << "\t";
                    if(((i + 1) % lin) == 0)
                        cout << endl;
                }
                break;

            case 9:
                cout << "TEATRO FECHADO, O SHOW ACABOU!" << endl;
                return 0;

            default:
                cout << "INSIRA UM VALOR VÁLIDO." << endl;

        }
    }

}

