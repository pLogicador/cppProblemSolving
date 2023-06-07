#include <iostream>
#include <iomanip>
using std::setw;
#include <cstdlib> // contém protótipos para funções srand e rand
using std::rand;
using std::srand;
using namespace std;


int main()
{

    unsigned seed; // armazena a semente inserida pelo usuário

    cout << "Enter seed: ";
    cin >> seed;
    srand( seed ); // semeia o gerador de número aleatório

    // itera 10 vezes
    for ( int counter = 1; counter <= 10; counter++ )
    {
        // escolhe um número aleatório de 1 a 6 e o envia para saída
        cout << setw( 10 ) << ( 1 + rand() % 6 );

        // se o contador for divisível por 5, inicia uma nova linha de saída
        if ( counter%5 == 0 )
            cout << endl;
    }

    return 0;

}
