// Exercício 4.22: ex04_22.cpp
// O que esse programa imprime?
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    // row == linha
    int row = 10;
    int column;

    while ( row >= 1 ) // faz loop até linha < 1
    {
        column = 1; // configura coluna como 1 quando a iteração inicia

        while ( column <= 10 ) // loop 10 em vezes
        {
            cout << ( row % 2 ? "<" : ">" ); // saída
            column++; // incrementa coluna
        }

        row--; // decrementa linha

        cout << endl; // inicia nova linha de saída
    }

  return 0; // indica terminação bem-sucedida
} // fim de mainv
