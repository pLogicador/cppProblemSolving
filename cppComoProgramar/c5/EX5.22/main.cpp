#include <iostream>
using namespace std;

int main()
{/*
    // a)
    int x, y;

    cout << "Enter x and y for check !( x < 5 ) && !( y >= 7 ): ";
    cin >> x >> y;

    bool result1 = !( x < 5 ) && !( y >= 7 );
    bool result2 = !(( x < 5  ) || ( y >= 7));
    if (result1 == result2)
    {
        cout << result1 << " equivalent " << result2 << endl;
    }

    // b)
    int a, b, g;

    cout << "Enter a, b and g for check !( a == b) || !( g != 5 ): ";
    cin >> a >> b >> g;

    bool result1 = !( a == b) || !( g != 5 );
    bool result2 = ! (( a == b ) && ( g != 5 ));

    cout << result1 << " equivalent " << result2 << endl;

    // c)
    cout << "Enter x and y for check !(( x <= 8 ) && ( y > 4 )): ";
    cin >> x >> y;

    bool result1 = !(( x <= 8 ) && ( y > 4 ));
    bool result2 = !( x <= 8 ) || !( y > 4 );

    cout << result1 << " equivalent " << result2 << endl;
*/
    // d)
    int i, j;
    cout << "Enter i and j for check !(( i > 4 ) || ( j <= 6 )): ";
    cin >> i >> j;

    bool result1 = !(( i > 4 ) || ( j <= 6 ));
    bool result2 = !( i > 4 ) && !( j <= 6 );

    cout << result1 << " equivalent " << result2 << endl;

    return 0;
}
