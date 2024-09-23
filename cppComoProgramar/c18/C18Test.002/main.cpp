// demonstrando a função-membro string substr.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    string define1( "The aitplane landed on time." );

    /* recupera a substring "plane" que inicia no subscrito 7 e consiste em 5 elementos
    */
    cout << define1.substr( 7, 5 ) << endl;

    return 0;
}
