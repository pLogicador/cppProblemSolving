/* EX4 & EX5
*/

// Cálculo do produto de três inteiros

#include <iostream> // Permite ao programa realizar a entrada e saída de dados

// O programa utiliza cout, cin e endl
using std::cout;
using std::cin;
using std::endl;

int main()
{
    // Declaração das variáveis a ser utilizadas
    int x;
    int y;
    int z;
    int result;

    // Solicitação dos valores do usuário
    cout << "Enter first value: ";
    cin >> x;
    cout << "Enter Second value: ";
    cin >> y;
    cout << "Enter Third value: ";
    cin >> z;

    // Multiplicação dos valores lidos
    result = x * y * z;

    // Função para imprimir o resultado e finaliza a linha
    cout << "\nThe product is " << result << endl;

    return 0;
}
