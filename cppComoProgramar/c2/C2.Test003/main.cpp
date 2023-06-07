// Comparando inteiros utilizando instru��es if, operadores relacionais e operadores de igualdade.

#include <iostream> // Permite o programa realizar entrada e sa�da de dados

using std::cout; // o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl; // o programa utiliza endl

// In�cio da execu��o da fun��o
int main()
{
    int number1, number2;

    cout << "Enter two integers to compare: "; // Solicita dados ao usu�rio
    cin >> number1 >> number2; // Leitura dos valores inseridos pelo usu�rio

    // Condi��es a se avaliar
    if(number1 == number2)
        cout << number1 << "==" << number2 << endl;

    if(number1 != number2)
        cout << number1 << "!=" << number2 << endl;

    if(number1 < number2)
        cout << number1 << " < " << number2 << endl;

    if(number1 > number2)
        cout << number1 << " > " << number2 << endl;

    if(number1 <= number2)
        cout << number1 << " <= " << number2 << endl;

    if(number1 >= number2)
        cout << number1 << " >= " << number2 << endl;


    return 0; // O programa finalizou com sucesso

}// Fim da execu��o da fun��o
