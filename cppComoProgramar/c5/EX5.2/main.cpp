#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <cmath>
using std::pow;


int main()
{
    // a)
    cout << "a)\n";
    int sum = 0;
    int count;

    for( count = 1; count <= 99; count += 2 )
    {
        sum += count;
    }
    cout << sum;

    // b)
    cout << "\nb)\n";
    cout << fixed << std::left
        << setprecision(1) << setw(15) << 333.54672
        << setprecision(2) << setw(15) << 333.54672
        << setprecision(3) << setw(15) << 333.54672
        << endl;

    // c)
    cout << "\nc)\n";
    cout << fixed << setprecision(2)
        << setw(10) << pow(2.5, 3) << endl;

    // d)
    cout << "\nd)\n";
    int x = 1;

    while (x <= 20)
    {
        cout << x;

        if (x%5 == 0)
        {
            cout << endl;
        }
        else
        {
            cout << '\t';
        }
        x++;
    }

    // e)
    cout << "\ne)\n";
    for ( x = 1; x <= 20; x++ )
    {

        if ( x%5 == 0 )
            cout << x << endl;
        else
            cout << x << '\t';
    }


    return 0;
}
