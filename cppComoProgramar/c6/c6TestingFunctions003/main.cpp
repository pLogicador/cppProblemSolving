
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;




int main( int argc, char *argv[] )
{
    /*
    cout << "\n\n" << argv[0] << endl;
    cout << "\n\n" << argc << endl;
    */
    if ( argc > 1 )
    {
        // faz comparação entre duas strings
        if ( !strcmp(argv[1], "sol" ))
        {
            cout << "\nVou ao clube.\n" << endl;
        }else if ( !strcmp(argv[1], "nublado" ))
        {
            cout << "\nVou ao cinema.\n" << endl;
        }else
        {
            cout << "\nVou ficar em casa.\n" << endl;
        }
    }

    system( "pause" );
    return 0;
}
