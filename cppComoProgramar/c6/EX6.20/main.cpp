/*

Escreva uma função multiple que determina para um par de inteiros se o segundo inteiro é um múltiplo do primeiro.
A função deve aceitar dois argumentos inteiros e retornar true se o segundo for um múltiplo do primeiro e false, caso contrário.
Utilize essa função em um programa que insere uma série de pares de inteiros.

*/
#include <iostream>
using namespace std;

bool multiple( int a, int b );

int main()
{
    int firstN, afterN;



    for ( firstN=1; firstN<=6; firstN++ )
    {
        for( afterN=1; afterN<=6; afterN++ )
        {
            cout << firstN << " is multiple of " << afterN << "?  "
                << multiple( firstN,afterN ) << endl;
        }
    }


    return 0;
}


bool multiple( int a, int b )
{
    if ( (a%b) == 0 )
    {
        return true;
    }
    return false;

}
