#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    const int arraySize = 7;                /*  ignora o elemento zero Porque o �ndice 0 do array 'frequency' n�o �
                                                utilizado para armazenar nenhum valor. */

    int frequency[ arraySize ] = { 0 };     /* 'frequency' com tamanho 'arraySize' e todos os elementos igualados a 0;
                                                Para garantir  que todas as posi��es do array comessem com uma contagem de frequ�ncia igual;
                                                e para evitar lixo de mem�ria. */


    srand( time( 0 ) )                      // semeia o gerador de n�mero aleat�rio





    // lan�a o dado 6.000.000 vezes; usa o valor do dado como �ndice de freq��ncia
    for ( int roll = 1; roll <= 6000; roll++ )
    {
        frequency[ 1 + rand() % 6 ]++;
    }

    cout << "Face" << setw( 13 ) << "Frequency" << endl;

    // gera a sa�da do valor de cada elemento do array
    for (int face = 1; face < arraySize; face++)
    {
        cout << setw(4) << face
            << setw(13) << frequency[face] << endl;
    }




    return 0;
}
