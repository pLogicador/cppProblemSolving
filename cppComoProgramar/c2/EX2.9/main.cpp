
#include <iostream> // para realizar a entrada e a sa�da de dados

// O programa utiliza cout, cin

using std::cout;
using std::cin;

// inicio da fun��o
int main()
{
    // declara��o das vari�veis

    int a, b, c;

    cout << "Enter two numbers: "; // pede dados ao usu�rio
    cin >> b >> c;
    a = b * c; // os produtos b e c � atribu�do para a

    cout << "\nResult: " << a << std::endl;

    return 0;
}
