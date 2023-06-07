#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x, y;
    int i, j;

    cout << "Enter two integers in the range 1-20: ";
    cin >> x >> y;

    for ( i = 1; i <= y; i++ ) // conta de 1 a y
    {
        for ( j = 1; j <= x; j++ ) // conta de 1 a x
        {
            cout << "@";
        }
        cout << endl;
    }

    return 0;
}
