#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const int arraySize = 3;
    int table[arraySize][arraySize];    // a)   b)  O array "table" contém um total de 9 elementos, pois possui 3 linhas e 3 colunas.


    /* c )  Utilizando uma instrução de repetição for para inicializar cada elemento do array com a soma de seus subscritos.*/

    for( int i = 0; i < arraySize; i++ )
    {
        for( int j = 0; j < arraySize; j ++ )
        {
            table[i][j] = i+j;
        }
    }


    cout << "\n\n" << endl;


    /*d)    Escreva um segmento de programa para imprimir os valores de cada elemento do array table em formato tabular com 3 linhas e
            3 colunas.*/
    int table2[ arraySize ][ arraySize ] = { { 1, 8 }, { 2, 4, 6 }, { 5 } };


    cout << "    [0] [1] [2]" << endl;
    for( int i = 0; i < arraySize; i++ )
    {
        cout << "[" << i << "]";

        for( int j = 0; j < arraySize; j++ )
        {
            cout << setw( 3 ) << table2[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}
