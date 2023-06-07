// Comparando inteiros utilizando instruções if, operadores relacionais e operadores de igualdade.

#include <iostream> // Permite o programa realizar entrada e saída de dados

using std::cout; // o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl; // o programa utiliza endl

// Início da execução da função
int main()
{
    int number1, number2;

    cout << "Enter two integers to compare: "; // Solicita dados ao usuário
    cin >> number1 >> number2; // Leitura dos valores inseridos pelo usuário

    // Condições a se avaliar
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

}// Fim da execução da função
