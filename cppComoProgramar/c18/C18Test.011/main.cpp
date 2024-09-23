/*
   Demonstrando a entrada a partir de um objeto istringstream.*/
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <sstream>
using std::istringstream;

int main()
{
    string input( "Input test 123 4.7 A" );
    istringstream inputString( input );
    string string1;
    string string2;
    int integer;
    double double1;
    char character;

    inputString >> string1 >> string2 >> integer >> double1 >> character;

    cout << "The following items were extracted\n"
    << "from the istringstream object:" << "\nstring: " << string1
    << "\nstring: " << string2 << "\n int: " << integer
    << "\ndouble: " << double1 << "\n char: " << character;

    // tenta ler a partir do fluxo vazio
    long value;
    inputString >> value;

    // testa resultados do fluxo
    if ( inputString.good() )
        cout << "\n\nlong value is: " << value << endl;
    else
        cout << "\n\ninputString is empty" << endl;

return 0;
}
