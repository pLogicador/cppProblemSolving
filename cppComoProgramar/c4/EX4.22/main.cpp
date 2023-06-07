// Exerc�cio 4.22: ex04_22.cpp
// O que esse programa imprime?
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    // row == linha
    int row = 10;
    int column;

    while ( row >= 1 ) // faz loop at� linha < 1
    {
        column = 1; // configura coluna como 1 quando a itera��o inicia

        while ( column <= 10 ) // loop 10 em vezes
        {
            cout << ( row % 2 ? "<" : ">" ); // sa�da
            column++; // incrementa coluna
        }

        row--; // decrementa linha

        cout << endl; // inicia nova linha de sa�da
    }

  return 0; // indica termina��o bem-sucedida
} // fim de mainv
