/*

    Escreva uma fun��o integerPower( base, exponent ) que retorna o valor de
        baseexponent
    Por exemplo, integerPower( 3, 4 ) = 3 * 3 * 3 * 3. Pressuponha que o expoente seja um inteiro n�o-zero positivo e que a
    base seja um inteiro. A fun��o integerPower deve utilizar for ou while para controlar o c�lculo. N�o utilize fun��es da biblioteca
    matem�tica.


*/
#include <iostream>
using namespace std;


int integerPower( int b, int e );
void calculate( int b, int e );

int main()
{
    // testing
    calculate( 3,4 );


    return 0;
}


int integerPower( int b, int e )
{
    int acumulaResult = 1;
    int i = 1;

    for ( i; i <= e; i++ )
    {
        acumulaResult *= b;
    }
    return b;

}


void calculate( int b, int e )
{

    for ( b=1; b<=10; b++ )
    {
        for ( e=1; e<=4; e++ )
        {
            cout << integerPower( b, e ) << " ";
        }
        cout << "\n";
    }

}

