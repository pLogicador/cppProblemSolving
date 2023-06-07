#include <iostream>
using namespace std;

int main()
{
    int counter;

    for ( counter =1; counter <= 10; counter++ )
    {
        if ( counter != 5 )
        {
            cout << counter << " ";
        }
    }
    cout << "\nSkip printing 5 without using continue" << endl;

    return 0;
}
