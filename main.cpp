#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    unsigned int lin = 5, col = 5;
    int opc;
    unsigned int choose;
    cout << "TEATRO -- ASSENTOS:" << endl;

    Teatro a(lin, col);

    while(1)
    {
        cout << "ASSENTOS RESERVADOS: " << endl;
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
        cout << endl;
        cout << " --------------------------- " << endl;
        cout << "ESCOLHA UMA OPCAO: " << endl;
        cout << "1 - RESERVAR ASSENTO" << endl;
        cout << "2 - CANCELAR RESERVA" << endl;
        cout << "3 - SAIR" << endl;
        cout << " --------------------------- " << endl;

        cin >> opc;
        switch(opc)
        {
            case 1:
                cout << "ESCOLHA UM ASSENTO PRA RESERVAR: ";
                cin >> choose;
                a.escolha = choose - 1;
                a.inserir(a.escolha);
                break;
            case 2:
                cout << "ESCOLHA UM ASSENTO PRA DEIXAR A RESERVA: ";
                cin >> choose;
                a.escolha = choose - 1;
                a.remover(a.escolha);
                break;
            default:
                cout << "TEATRO FECHADO, O SHOW ACABOU!" << endl;
                return 0;

        }
    }

}

