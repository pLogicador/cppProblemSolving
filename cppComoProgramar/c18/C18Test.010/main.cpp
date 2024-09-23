/*
   Utilizando um objeto ostringstream dinamicamente alocado.*/
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

// Para programas que utilizam formata��o na mem�ria
#include <sstream> // arquivo de cabe�alho para processamento de fluxo de string
using std::ostringstream; // operadores de inser��o de fluxo

int main()
{
    ostringstream outputString; // cria inst�ncia ostringstream

    string string1( "Output of several data types " );
    string string2( "to an ostringstream object:" );
    string string3( "\n double: " );
    string string4( "\n int: " );
    string string5( "\naddress of int: " );

    double double1 = 123.4567;
    int integer = 22;

    // gera sa�da de strings, double e int para ostringstream outputString
    outputString << string1 << string2 << string3 << double1
    << string4 << integer << string5 << &integer;

    // chama str para obter o conte�do de string de ostringstream
    cout << "outputString contains:\n" << outputString.str();

    // adiciona mais caracteres e chama str para gerar a sa�da da string
    outputString << "\nmore characters added";
    cout << "\n\nafter additional stream insertions,\n"
    << "outputString contains:\n" << outputString.str() << endl;

    return 0;
}
