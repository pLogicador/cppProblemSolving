// Figura 18.7: Fig18_07.cpp
// Demonstrando as funções-membro string erase e replace.
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
// o compilador concatena todas as partes em uma string
    string string1( "The values in any left subtree"
        "\nare less than the value in the"
        "\nparent node and the values in"
        "\nany right subtree are greater"
        "\nthan the value in the parent node" );

    cout << "Original string:\n" << string1 << endl << endl;

    // remove todos os caracteres a partir da (e incluindo a) localização 62 até o final de string1

    string1.erase( 62 );

    // gera a saída da nova string
    cout << "Original string after erase:\n" << string1
    << "\n\nAfter first replacement:\n";
    // utilizam find para loccalizar cada ocorrencia do caractere de espaço em branco; Cada espaço em branco é substituído por '.'
    int position = string1.find( " " ); // localiza o primeiro espaço

    // substitui todos os espaços pelo ponto
    while ( position != string::npos )
    {                                        // a função replace aceita tres argumentos:
        string1.replace( position, 1, "." ); /* o subscrito do caractere na string em que a substring deve iniciar,
                                                o numero de caracteres a substituir e a string substituta  */

        position = string1.find( " ", position + 1 ); /*Em seguida é realizado a função para continuar a pesquisar a
                                                        localização do próximo caractere */
    } // fim while
    cout << string1 << "\n\nAfter second replacement:\n";

    position = string1.find( "." ); // localiza o primeiro ponto

    // substitui todos os pontos por dois ponto-e-vírgulas. NOTA: isso irá sobrescrever os caracteres
    while ( position != string::npos )
    {
        string1.replace( position, 2, "xxxxx;;yyy", 5, 2 );
        position = string1.find( ".", position + 1 );
    } // fim do while

    cout << string1 << endl;

    return 0;
} // fim de main
