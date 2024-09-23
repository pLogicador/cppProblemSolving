/*
   Utilizando um objeto ostringstream dinamicamente alocado.*/
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

// Para programas que utilizam formatação na memória
#include <sstream> // arquivo de cabeçalho para processamento de fluxo de string
using std::ostringstream; // operadores de inserção de fluxo

int main()
{
    ostringstream outputString; // cria instância ostringstream

    string string1( "Output of several data types " );
    string string2( "to an ostringstream object:" );
    string string3( "\n double: " );
    string string4( "\n int: " );
    string string5( "\naddress of int: " );

    double double1 = 123.4567;
    int integer = 22;

    // gera saída de strings, double e int para ostringstream outputString
    outputString << string1 << string2 << string3 << double1
    << string4 << integer << string5 << &integer;

    // chama str para obter o conteúdo de string de ostringstream
    cout << "outputString contains:\n" << outputString.str();

    // adiciona mais caracteres e chama str para gerar a saída da string
    outputString << "\nmore characters added";
    cout << "\n\nafter additional stream insertions,\n"
    << "outputString contains:\n" << outputString.str() << endl;

    return 0;
}
