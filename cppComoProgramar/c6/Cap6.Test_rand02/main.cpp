#include <iostream>
#include <iomanip>
using std::setw;
#include <cstdlib> // cont�m prot�tipos para fun��es srand e rand
using std::rand;
using std::srand;
using namespace std;


int main()
{

    unsigned seed; // armazena a semente inserida pelo usu�rio

    cout << "Enter seed: ";
    cin >> seed;
    srand( seed ); // semeia o gerador de n�mero aleat�rio

    // itera 10 vezes
    for ( int counter = 1; counter <= 10; counter++ )
    {
        // escolhe um n�mero aleat�rio de 1 a 6 e o envia para sa�da
        cout << setw( 10 ) << ( 1 + rand() % 6 );

        // se o contador for divis�vel por 5, inicia uma nova linha de sa�da
        if ( counter%5 == 0 )
            cout << endl;
    }

    return 0;

}
