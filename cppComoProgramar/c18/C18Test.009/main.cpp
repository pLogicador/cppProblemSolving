// Figura 18.10: Fig18_10.cpp
// Utilizando um iterador para gerar a saída de uma string.
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string string1( "Testing iterators" );
    string::const_iterator iterator1 = string1.begin();

    cout << "string1 = " << string1
    << "\n(Using iterator iterator1) string1 is: ";

    // itera pela string
    while ( iterator1 != string1.end() )
    {
        cout << *iterator1; // desreferencia o iterador para obter char
        iterator1++; // avança o iterador para o próximo char
    } // fim do while

    cout << endl;

    return 0;
}
