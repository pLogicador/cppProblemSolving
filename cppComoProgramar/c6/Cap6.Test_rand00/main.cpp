// Inteiros aleat�rios deslocados e escalonados
#include <iostream>
#include <iomanip>
#include <cstdlib>
using std::setw;
using std::rand;
using namespace std;


int main()
{
    for ( int counter = 1; counter <= 20; counter++ )
    {
        // escolhe numro ale�torio de 1 a 6 e envia-o para sa�da
        cout << setw( 10 ) << ( 1 + rand() % 6 );

        // se o contador for divis�vel por 5, inicia uma nova linha de sa�da
        if ( counter%5 == 0 )
            cout << endl;
    }

    return 0;
}
