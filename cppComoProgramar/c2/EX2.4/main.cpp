/* EX4 & EX5
*/

// C�lculo do produto de tr�s inteiros

#include <iostream> // Permite ao programa realizar a entrada e sa�da de dados

// O programa utiliza cout, cin e endl
using std::cout;
using std::cin;
using std::endl;

int main()
{
    // Declara��o das vari�veis a ser utilizadas
    int x;
    int y;
    int z;
    int result;

    // Solicita��o dos valores do usu�rio
    cout << "Enter first value: ";
    cin >> x;
    cout << "Enter Second value: ";
    cin >> y;
    cout << "Enter Third value: ";
    cin >> z;

    // Multiplica��o dos valores lidos
    result = x * y * z;

    // Fun��o para imprimir o resultado e finaliza a linha
    cout << "\nThe product is " << result << endl;

    return 0;
}
