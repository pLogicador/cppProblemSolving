/*
    7.16 Rotule os elementos de um array unidimensional de 3 por 5 chamado sales para indicar a ordem em que eles são configurados como
    zero pelo seguinte segmento de programa:
        for ( row = 0; row < 3; row++ )
         for ( column = 0; column < 5; column++ )
            sales[ row ][ column ] = 0;

    Resumindo, o programa cria uma matriz bidimensional usando um array unidimensional, atribui valores aos
    elementos dessa matriz e depois os exibe no console com rótulos de linha e coluna correspondentes.
    Isso demonstra a indexação e acesso aos elementos de uma matriz usando aritmética de ponteiros.
*/

#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLUMNS = 5;
    int sales[ROWS * COLUMNS];



    /*O primeiro loop for aninhado é usado para percorrer as linhas da matriz (de 0 a 2) usando a variável row.*/
    for (int row = 0; row < ROWS; row++)
    {
        /*O segundo loop for aninhado é usado para percorrer as colunas da matriz (de 0 a 4) usando a variável column.*/
        /* Dentro do loop aninhado, a variável index é calculada para mapear os elementos bidimensionais para o
        array unidimensional. Ela é calculada multiplicando o número da linha pelo número de colunas e
        somando o número da coluna atual.*/
        for (int colum = 0; colum < COLUMNS; colum++)
        {
            int index = row * COLUMNS + colum;
            sales[index] = index;
        }
    }
    /*Após o preenchimento do array, o programa exibe os elementos com seus rótulos de linha e coluna.*/
    /*Dentro do loop aninhado, o cálculo de index é feito novamente para obter o índice correto no
    array sales.*/
    cout << "Elementos do array com rotulos:\n";
    for (int row = 0; row < ROWS; row++)
    {
        for(int column = 0; column < COLUMNS; column++)
        {
            int index = row * COLUMNS + column;
            cout << "sales[" << row << "][" << column << "] = " << sales[index] << endl;
        }
    }



    return 0;
}
