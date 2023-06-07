// Programa de adição que exibe a soma de dois números
#include <iostream> // inclui-se o conteúdo do arquivo de cabeçalho iostream

using namespace std;

int main()
{
    int number1, number2, sum; // declarações de variável

    std::cout << "Enter first integer: "; //solicita dados ao usuário
    std::cin >> number1; // lê primeiro inteiro inserido pelo usuário em number1

    std::cout << "Enter second integer: "; //solicita dados ao usuário
    std::cin >> number2; // lê segundo inteiro inserido pelo usuário em number1

    /* utilizar o objeto fluxo de entrada cin (do namespace std) e o operador de extração de fluxo, >>, para obter um valor do teclado.
    Ou seja, std::cin fornece number1
    */

    sum = number1 + number2; // Adiciona os números; Armazena o resultado em sum

    std::cout << "Sum is " << sum << std::endl; // Exibe sum; Termina a linha

    return 0;
}
