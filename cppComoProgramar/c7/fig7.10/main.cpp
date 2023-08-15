#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    const int arraySize = 7;                /*  ignora o elemento zero Porque o índice 0 do array 'frequency' não é
                                                utilizado para armazenar nenhum valor. */

    int frequency[ arraySize ] = { 0 };     /* 'frequency' com tamanho 'arraySize' e todos os elementos igualados a 0;
                                                Para garantir  que todas as posições do array comessem com uma contagem de frequência igual;
                                                e para evitar lixo de memória. */


    srand( time( 0 ) )                      // semeia o gerador de número aleatório





    // lança o dado 6.000.000 vezes; usa o valor do dado como índice de freqüência
    for ( int roll = 1; roll <= 6000; roll++ )
    {
        frequency[ 1 + rand() % 6 ]++;
    }

    cout << "Face" << setw( 13 ) << "Frequency" << endl;

    // gera a saída do valor de cada elemento do array
    for (int face = 1; face < arraySize; face++)
    {
        cout << setw(4) << face
            << setw(13) << frequency[face] << endl;
    }




    return 0;
}
