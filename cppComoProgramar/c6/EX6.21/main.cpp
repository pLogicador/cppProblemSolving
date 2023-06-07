/*

Escreva um programa que insere uma s�rie de inteiros e os passa um por vez para a fun��o even, que utiliza o operador m�dulo para
determinar se um inteiro � par. A fun��o deve aceitar um argumento inteiro e retornar true se o inteiro for par e false, caso contr�rio.

*/

#include <iostream>
using namespace std;

bool even( int x );

int main()
{
    for ( int i=1; i<=10; i++ )
    {
        if ( even(i) )
        {
            cout << i << " is True, that is, it is even."
                << endl;
        }

        else
            cout << i << " is False, that is, it is odd."
                << endl;
    }
    cout << endl;


    return 0;
}


bool even( int x )
{
    return ( (x%2) == 0 );

}
