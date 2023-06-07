#include <iostream>

using namespace std;

int main()
{
    int x, y; // answer: x = 9, y = 11

    // a)
    if ( x < 10 )
        if ( y > 10 )
            cout << "*****" << endl;
        else
            cout << "#####" << endl;

    cout << "$$$$$" << endl;

    // b)
    if ( x < 10 )
    {
        if ( y > 10 )
                cout << "*****" << endl;
    }
    else
    {
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
    }

    return 0;
}
