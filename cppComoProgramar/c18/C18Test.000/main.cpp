// Demonstrando a atribui��o e a concatena��o de stgrings
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    // Cria��o dos objetos de string
    string define1( "cat" );
    string define2;
    string define3;

    define2 = define1; // atribui define1 a define2
    define3.assign( define1 ); // atribui define1 a define3

    cout << "define1: " << define1
    << "\ndefine2: " << define2
    << "\ndefine3: " << define3 << "\n\n";

    /* modifica define2 e define3 com o operador de subscrito
     ou seja o char "r" � transfereido para a posi��o 2 do define3
     e 0 do define2
     */
    define2[ 0 ] = define3[ 2 ] = 'r';

    cout << "After modification of define2 and define3: \n"
    << "define1: " << define1
    << "\ndefine2: " << define2
    << "\ndefine3: ";


    // demonstrando a fun��o-membro em
    for ( int i = 0; i < define3.length(); i++ )
        cout << define3.at( i );

    cout << endl;

    // declara define4 e define5
    string define4( define1 + "apult" ); // concatena��o
    string define5;

    // += sobrecarregado; cria "carpet para define3"; cria "catacomb" para define1
    define3 += "pet";
    define1.append( "acomb" );

    /* acrescenta a localiza��o de subscrito 4 at� o final de define1 para criar a string "comb"
    ( a define5 estava inicialmente vazia )*/
    define5.append( define1, 4, define1.length() - 4 );

    cout << "\nAfter concatenation: \ndefine1: " << define1
    << "\ndefine2: " << define2
    << "\ndefine3: " << define3
    << "\ndefine4: " << define4
    << "\ndefine5: " << define5 << endl;

    return 0;
}
