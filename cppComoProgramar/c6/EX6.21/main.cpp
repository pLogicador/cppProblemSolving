/*

Escreva um programa que insere uma série de inteiros e os passa um por vez para a função even, que utiliza o operador módulo para
determinar se um inteiro é par. A função deve aceitar um argumento inteiro e retornar true se o inteiro for par e false, caso contrário.

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
