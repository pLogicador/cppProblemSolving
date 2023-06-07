/*
MANIPULADOR DE FLUXO DEFINIDO in C++
-- MANIPULADOR DE FLUXO DEFINIDO nos permite controlar o número de dígitos de um valor de ponto flutuante que aparece em um fluxo de saída.
- set_precision é uma precisão de conjunto, uma função que deve ser utilizada em conjunto com o operador de inserção '<<'. EX1

- O operador de stream fixed especifica um número de dígitos após o decimal e os arredonda de acordo com a definição do setprecision. EX2

- 'scientific' paraa saída científica. EX3

Example:
Deve-se incluir a biblioteca iomanip para definir a precisão definida.
Para utiliar a função set_precision deve-se chamar o cout(para definir o tipo de saída do dos dígitos do valor em float).
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double number = 26.888549;
    // EX1
    // define-se a precisão de conjunto com a quantidade desejadda de dígitos
    cout << "1: " << setprecision(1) << number << endl; // exibe a notação científica por exibir apenas o primeiro valor
    cout << "2: " << setprecision(2) << number << endl;
    cout << "3: " << setprecision(3) << number << endl;
    cout << "4: " << setprecision(4) << number << endl;
    cout << "5: " << setprecision(5) << number << endl;

    cout << "\n\n";

    // EX2
    cout << "1: " << fixed << setprecision(1)  << number << endl;
    cout << "2: " << fixed << setprecision(2)  << number << endl;
    cout << "3: " << fixed << setprecision(3)  << number << endl;
    cout << "4: " << fixed << setprecision(4)  << number << endl;
    cout << "5: " << fixed << setprecision(5)  << number << endl;

    cout << "\n\n";

    // EX3
    cout << "1: " << scientific << setprecision(1)  << number << endl;
    cout << "2: " << scientific << setprecision(2)  << number << endl;
    cout << "3: " << scientific << setprecision(3)  << number << endl;
    cout << "4: " << scientific << setprecision(4)  << number << endl;
    cout << "5: " << scientific << setprecision(5)  << number << endl;

    cout << "\n\n";

    // EX4
    double number1 = 67.2;
    double number2 = 35.456;
    double number3 = 78.49564;
    double number4 = 12;
    double number5 = 55.7999;
    cout << "number1: " << fixed << setprecision(3)  << number1 << endl;
    cout << "number2: " << fixed << setprecision(3)  << number2 << endl;
    cout << "number3: " << fixed << setprecision(2)  << number3 << endl;
    cout << "number4: " << fixed << setprecision(1)  << number4 << endl;
    cout << "number5: " << fixed << setprecision(1)  << number5 << endl;


    return 0;
}
