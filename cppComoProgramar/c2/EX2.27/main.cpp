// Teste para opera��es de coer��o
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char character;

    cout << "Enter some character: ";
    cin >> character;

    cout << static_cast< int >(character);

    return 0;
}
