/*
Mostre o valor de x depois que cada uma das seguintes instruções for realizada:

a) x = fabs( 7.5 )
b) x = floor( 7.5 )
c) x = fabs( 0.0 )
d) x = ceil( 0.0 )
e) x = fabs( -6.4 )
f) x = ceil( -6.4 )
g) x = ceil( -fabs( -8 + floor( -5.5 ) ) )

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x;
    // a)
    x = fabs(7.5);
    cout << "x = fabs(7.5): " << x << endl;

    // b)
    x = floor(7.5);
    cout << "x = floor(7.5): " << x << endl;

    // c)
    x = fabs(0.0);
    cout << "x = fabs(0.0): " << x << endl;

    // d)
    x = ceil(0.0);
    cout << "x = ceil(0.0): " << x << endl;

    // e)
    x = fabs(-6.4);
    cout << "x = fabs(-6.4): " << x << endl;

    // f)
    x = ceil(-6.4);
    cout << "x = ceil(-6.4): " << x << endl;

    // g)
    x = ceil( -fabs( -8 + floor( -5.5) ) );
    cout << "x = ceil( -fabs( -8 + floor( -5.5) ) ): " << x
        << endl;


    return 0;
}
