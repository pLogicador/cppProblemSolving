/*
  Demonstrando as funções-membro insert da classe string. */
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string string1( "beginning end" );
    string string2( "middle " );
    string string3( "12345678" );
    string string4( "xx" );

    cout << "Initial strings:\nstring1: " << string1
    << "\nstring2: " << string2 << "\nstring3: " << string3
    << "\nstring4: " << string4 << "\n\n";

    // insere “middle” na localização 10 de string1
    string1.insert( 10, string2 );

    // “xx” de inserção na localização 3 de string3
    string3.insert( 3, string4, 0, string::npos ); /* utiliza insert para inserir string4 antess do elemento 3 da string3;
                                Os dois últimos argumentos especificam o elemento inicial e final de string4 que devem ser inseridos
                                NOTA: utilizar string::npos faz com que a string inteira seja inserida*/
    cout << "Strings after insert:\nstring1: " << string1
    << "\nstring2: " << string2 << "\nstring3: " << string3
    << "\nstring4: " << string4 << endl;

    return 0;
} // fim de main
