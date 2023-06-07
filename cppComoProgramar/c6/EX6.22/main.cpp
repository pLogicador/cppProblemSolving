/*
Programa: EX6.22 (resolu��o dos exerc�cios 22, 23 e 24)
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descri��o: Neste programa foi escrito algumas fun��es que desenha formas
  geom�tricas com a quantidade geral de linha e coluna e o tipo de
  caractere inseridos conforme o par�metro de cada fun��o.

*/

#include <iostream>
using namespace std;

// Instancia��o de cada fun��o
void writeSquare( int, string );
void writeRightTriangle( int, string);
void writeInvertedTriangle( int, string );
void writeTriangle( int, string );
void writeDiamond( int, string );

int main()
{
    // Declarando vari�veis
    int sizeSquare;
    string tipeSymbol;


    // Pede ao usu�rio o tamanho e o tipo de caractere
    cout << "Enter the size and symbol to draw the shapes (or -1 to exit): ";
    cin >> sizeSquare >> tipeSymbol;

    // loop finalizado se a condi��o de guarda for satisfeita
    while ( sizeSquare != -1 )
    {
        cout << "Drawing square\n";
        writeSquare( sizeSquare, tipeSymbol );
        cout << endl;


        cout << "Drawing right triangle\n";
        writeRightTriangle( sizeSquare, tipeSymbol );
        cout << endl;


        cout << "Drawing inverted triangle\n";
        writeInvertedTriangle( sizeSquare, tipeSymbol );
        cout << endl;


        cout << "Drawing triangle\n";
        writeTriangle( sizeSquare, tipeSymbol );
        cout << endl;


        cout << "Drawing diamond\n";
        writeDiamond( sizeSquare, tipeSymbol );
        cout << endl;


        cout << "Enter the next size and symbol to draw the shapes (or -1 to exit): ";
        cin >> sizeSquare;
    }


    return 0;
}

// desenha quadrado
void writeSquare( int size, string fillCharacter = "*" )
{
    int row;
    int column;

    for ( int row=1; row<=size; row++ )
    {
        for ( int column=1; column<=size; column++ )
        {
            cout << fillCharacter;
        }
        cout << endl;
    }
};



// desenha triangulo ret�ngulo
void writeRightTriangle( int size, string fillCharacter = "*" )
{
    int row;
    int column;

    for ( row = 1; row <= size; row++ )
    {
        for ( column = 1; column <= row; column++ )
        {
            cout << fillCharacter;
        }
        cout << endl;
    }
};



// desenha tri�ngulo invertido
void writeInvertedTriangle( int size, string fillCharacter = "*" )
{
    int row;
    int column;

    for ( row = size; row >= 1; row-- )
    {
        for ( column = 1; column <= row; column++ )
        {
            cout << fillCharacter;
        }
        cout << endl;
    }
};



// desenha tri�ngulo
void writeTriangle( int size, string fillCharacter = "*" )
{
    int row;
    int space;
    int column;



    for ( row = 1; row <= size; row++ )
    {
        for ( space = size - row; space >= 1; space-- )
        {
            cout << " ";
        }

        for ( column = 1; column <= 2*row-1; column++ )
        {
            cout << fillCharacter;
        }
        cout << endl;
    }

};



// dessenha losango
void writeDiamond( int size, string fillCharacter = "*" )
{
    int spaces = size - 1;
    int row;
    int column;
    int space;


    for ( row = 1; row <= size; row++ )
    {
        for ( space = 1; space <= spaces; space++ )
        {
            cout << " ";
        }
        spaces--;

        for ( column = 1; column <= 2*row-1; column++ )
        {
            cout << fillCharacter;
        }
        cout << endl;
    }
    spaces = 1;

    for ( row = size-1; row >= 1; row-- )
    {
        for ( space = 1; space <= spaces; space++ )
        {
            cout << " ";
        }
        spaces++;

        for ( column = 1; column <= 2*row-1; column++ )
        {
            cout << fillCharacter;
        }
        cout << endl;
    }
};

