// Utilizando a função swap para fazer a troca de duas strings.

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string first( "one" );
    string second( "two" );

    // gera a saída das strings
    cout << "Before swap:\nfirst: " << first << "\nSecond: " << second;

    first.swap( second ); // troca string

    cout << "\n\nAfter swap:\nfirst: " << first << "\nSecond: " << second << endl;

    return 0;
}
