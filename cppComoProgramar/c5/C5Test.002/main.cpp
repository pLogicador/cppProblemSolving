#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setw; //  permite que o programa configure a largura de um campo
using std::setprecision;
#include <cmath>    // biblioteca de matem�tica C++ padr�o
using std::pow;     // permite ao programa utilizar a fun��o pow

int main()
{
    double amount;              // quantia em dep�sito ao fim de cada ano
    double principal = 1000.0;  // quantia inicial antess dos juros
    double rate = .05;          // taxa de juros

    // exibe cabe�alhos
    cout << "Year" << setw(21) << "Amount on deposit" << endl;

    // configura o formaato de n�meros de ponto flutuante
    cout << fixed << setprecision(2);

    // calcula a quantia de dep�sito para cada um dos dez ans
    for ( int year = 1; year <= 10; year++ )
    {
        // calcula nova quantia durante ano especificado
        amount = principal * pow( 1.0 + rate, year );

        // exibe ano e a quantia
        cout << setw(4) << year << setw(21) << amount
        << endl;
    }

    return 0;
}
