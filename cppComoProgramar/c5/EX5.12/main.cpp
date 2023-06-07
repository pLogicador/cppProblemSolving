#include <iostream>
using namespace std;

int main()
{
    for ( int i = 1; i <= 10; i++ )
    {
        // draw i-th line of first figure
        for ( int j = 1; j <= i; j++ )
        {
            cout << "*";
        }

        for ( int j = i + 1; j <= 10; j++ )
        {
            cout << " ";
        }
        cout << " ";

        // draw i-th line of second figure
        for ( int j = 1; j <= (11 - i); j++ )
        {
            cout << "*";
        }
        for ( int j =(11-i)+ 1; j <= 10; j++ )
        {
            cout << " ";
        }
        cout << " ";

        // draw i-th line of third figure
        for ( int j = 1; j < i; j++ )
        {
            cout << " ";
        }
        for ( int j = i; j < 10; j++ )
        {
            cout << "*";
        }
        cout << " ";

        // draw i-th line of fourth figure
        for ( int j = 1; j < (11-i); j++ )
        {
            cout << " ";
        }
        for ( int j = (11-i); j <= 10; j++ )
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
