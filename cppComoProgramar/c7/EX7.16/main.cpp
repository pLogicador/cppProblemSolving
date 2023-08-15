/*
    7.16 Rotule os elementos de um array unidimensional de 3 por 5 chamado sales para indicar a ordem em que eles s�o configurados como
    zero pelo seguinte segmento de programa:
        for ( row = 0; row < 3; row++ )
         for ( column = 0; column < 5; column++ )
            sales[ row ][ column ] = 0;

    Resumindo, o programa cria uma matriz bidimensional usando um array unidimensional, atribui valores aos
    elementos dessa matriz e depois os exibe no console com r�tulos de linha e coluna correspondentes.
    Isso demonstra a indexa��o e acesso aos elementos de uma matriz usando aritm�tica de ponteiros.
*/

#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLUMNS = 5;
    int sales[ROWS * COLUMNS];



    /*O primeiro loop for aninhado � usado para percorrer as linhas da matriz (de 0 a 2) usando a vari�vel row.*/
    for (int row = 0; row < ROWS; row++)
    {
        /*O segundo loop for aninhado � usado para percorrer as colunas da matriz (de 0 a 4) usando a vari�vel column.*/
        /* Dentro do loop aninhado, a vari�vel index � calculada para mapear os elementos bidimensionais para o
        array unidimensional. Ela � calculada multiplicando o n�mero da linha pelo n�mero de colunas e
        somando o n�mero da coluna atual.*/
        for (int colum = 0; colum < COLUMNS; colum++)
        {
            int index = row * COLUMNS + colum;
            sales[index] = index;
        }
    }
    /*Ap�s o preenchimento do array, o programa exibe os elementos com seus r�tulos de linha e coluna.*/
    /*Dentro do loop aninhado, o c�lculo de index � feito novamente para obter o �ndice correto no
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
