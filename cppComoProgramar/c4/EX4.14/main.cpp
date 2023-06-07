#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main()
{
    float balancaInicial, totalCobranca, totalPagamentos, limiteCredito, novaBalanca;
    int numeroConta;

    numeroConta = 0;
    balancaInicial = 0;
    totalCobranca = 0;
    totalPagamentos = 0;
    limiteCredito = 0;
    novaBalanca = 0;

    while( numeroConta != -1 )
    {
        cout << "Entre com o numero da conta ( ou -1 para sair ): ";
        cin >> numeroConta;

        if( numeroConta != -1 )
        {
            cout << "Entre com o saldo inicial: ";
            cin >> balancaInicial;

            cout << "Entre com o total de taxas: ";
            cin >> totalCobranca;

            cout << "Entre com o total de creditos: ";
            cin >> totalPagamentos;

            cout << "Entre com o limite de credito: ";
            cin >> limiteCredito;

            // calculo
            novaBalanca = balancaInicial + totalCobranca - totalPagamentos;

            cout << setprecision(2) << fixed;
            cout << "Novo saldo: " << novaBalanca << endl;

            if( novaBalanca > limiteCredito )
            {
                cout << "Conta:\t\t   " << numeroConta << endl;
                cout << "Limite de credito: " << limiteCredito << endl;
                cout << "Saldo:\t\t   " << novaBalanca << endl;
                cout << "Limite de credito ultrapassado." << endl;

                cout << "\n\n";
            }
            else
                cout << "\n\n";
        }

    }

    return 0;
}
