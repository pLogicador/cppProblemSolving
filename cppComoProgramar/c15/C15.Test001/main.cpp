// Testando estados de erro.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int integerValue;

    // exibição dos resultados de funções cin
    cout << "Before a bad input operation / Antes de uma operacao de entrada ruim:\n"
        << "\ncin.rdstate(): " << cin.rdstate()
        << "\n    cin.eof(): " << cin.eof()
        << "\n   cin.fail(): " << cin.fail()
        << "\n    cin.bad(): " << cin.bad()
        << "\n   cin.good(): " << cin.good()
        << "\n\nExpects an integer, but enter a character /\nEspera um numero inteiro, mas insira um caractere: ";
        cin >> integerValue; // insere valor de caractere
        cout << endl;

        // exibição dos resultados de funções cin dps de entrada inválida
        cout << "After a bad input operation /\n Apos uma operacao de entrada incorreta: "
            << "\ncin.rdstate(): " << cin.rdstate()
            << "\n    cin.eof(): " << cin.eof()
            << "\n   cin.fail(): " << cin.fail()
            << "\n    cin.bad(): " << cin.bad()
            << "\n   cin.good(): " << cin.good()
            << endl << endl;

        cin.clear(); // limpa o fluxo

        cout << "After cin.clear()"
        << "\n       cin.fail(): " << cin.fail()
        << "\n        cin.god(): " << cin.good() << endl;


    return 0;
}
