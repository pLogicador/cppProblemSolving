
#include <iostream> // para realizar a entrada e a saída de dados

// O programa utiliza cout, cin

using std::cout;
using std::cin;

// inicio da função
int main()
{
    // declaração das variáveis

    int a, b, c;

    cout << "Enter two numbers: "; // pede dados ao usuário
    cin >> b >> c;
    a = b * c; // os produtos b e c é atribuído para a

    cout << "\nResult: " << a << std::endl;

    return 0;
}
