// Figura 18.9: Fig18_09.cpp
// Convertendo em strings no estilo C.
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string string1( "STRINGS" ); // construtor de string com char* arg
    const char *ptr1 = 0; // inicializa *ptr1
    int length = string1.length(); // inicializado pelo comprimento de string1
    char *ptr2 = new char[ length + 1 ]; // incluindo nulo

    // copia caracteres de string1 na memória alocada
    string1.copy( ptr2, length, 0 ); // copia string1 para ptr2 char*
    ptr2[ length ] = '\0'; // adiciona terminador nulo

    cout << "string string1 is " << string1
    << "\nstring1 converted to a C-Style string is "
    << string1.c_str() << "\nptr1 is ";

    // Atribui ao ponteiro ptr1 a const char * retornada pela
    // função data(). NOTA: essa é uma atribuição potencialmente
    // perigosa. Se string1 for modificada, o ponteiro ptr1 pode
    // tornar-se inválido.
    ptr1 = string1.data();

    // gera a saída de cada caractere utilizando ponteiro
    for ( int i = 0; i < length; i++ )
    cout << *( ptr1 + i ); // utiliza aritmética de ponteiro

        cout << "\nptr2 is " << ptr2 << endl;
    delete [] ptr2; // reivindica memória dinamicamente alocada

    return 0;
} // fim de main
