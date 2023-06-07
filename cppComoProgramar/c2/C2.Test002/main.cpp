// Programa de adi��o que exibe a soma de dois n�meros
#include <iostream> // inclui-se o conte�do do arquivo de cabe�alho iostream

using namespace std;

int main()
{
    int number1, number2, sum; // declara��es de vari�vel

    std::cout << "Enter first integer: "; //solicita dados ao usu�rio
    std::cin >> number1; // l� primeiro inteiro inserido pelo usu�rio em number1

    std::cout << "Enter second integer: "; //solicita dados ao usu�rio
    std::cin >> number2; // l� segundo inteiro inserido pelo usu�rio em number1

    /* utilizar o objeto fluxo de entrada cin (do namespace std) e o operador de extra��o de fluxo, >>, para obter um valor do teclado.
    Ou seja, std::cin fornece number1
    */

    sum = number1 + number2; // Adiciona os n�meros; Armazena o resultado em sum

    std::cout << "Sum is " << sum << std::endl; // Exibe sum; Termina a linha

    return 0;
}
