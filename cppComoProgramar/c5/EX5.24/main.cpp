#include <iostream>
using namespace std;

int main()
{
    int rows;

    while (true)
    {
        cout << "Number rows: ";
        cin >> rows;

        if (rows%2 != 1)
        {
            cout << "Please input an odd number in range [1/19]\n";
        }else{
            break;
        }
    }

    int k = (rows - 1)/ 2;

    for ( int i = 0; i < k+1; i++)
    {
        for ( int j = 0; j < k-i; j++ )
        {
            cout << " ";
        }
        for ( int j = 0; j < 2*i+1; j++ )
        {
            cout << "#";
        }
        cout << endl;
    }

    for ( int i = 1; i <= k; i++ )
    {
        for ( int j = 0; j < i; j++ )
        {
            cout << " ";
        }
        for ( int j = 0; j < 2*(k-i)+1; j++ )
        {
            cout << "*";
        }
        cout << endl;
    }












    return 0;
}
