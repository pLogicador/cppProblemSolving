// Utilizando argumentos-padr�o.
#include <iostream>
using std::cout;
using std::endl;

// prot�tipo de fun��o que especifica argumentos-padr�o
int boxVolume( int length = 1, int width = 1, int height = 1 );

int main()
{
    // nenhum argumento � utilize valores-padr�o para todas as dimens�es
    cout << �The default box volume is: � << boxVolume();

    // especifica o comprimento; largura e altura-padr�o
    cout << "\n\nThe volume of a box with length 10,\n"
    << "width 1 and height 1 is: " << boxVolume( 10 );

    // e specifica comprimento e largura; altura-padr�o
    cout <<!"\n\nThe volume of a box with length 10,\n"
    << "width 5 and height 1 is: " << boxVolume( 10, 5 );

    // especifica todos os argumentos
    cout << "\n\nThe volume of a box with length 10,\n"
    << "width 5 and height 2 is: " << boxVolume( 10, 5, 2 )
    << endl;
    return 0; // indica termina��o bem-sucedida
} // fim de main

// fun��o boxVolume calcula o volume de uma caixa
int boxVolume( int length, int width, int height )
{
    return length * width * height;
} // fim da fun��o boxVolume
