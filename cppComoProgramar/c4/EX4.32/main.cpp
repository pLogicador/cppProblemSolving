#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{

    double a, b, c;

    cout << "Input side a, b, c: ";
    cin >> a >> b >> c;

    if( ((a+b) > c) && ((a+c)> b) && ((b+c) > a) )
    {
        if( a == b && a == c )
        {
            cout << "This is an equilateral triangle." << endl;
        }
        else if( a == b || b == c || a == c )
        {
            cout << "This is an isosceles triangle." << endl;
        }
        else
        {
            cout << "This is a scalene triangle." << endl;
        }
    }
    else
    {
        cout << "Values do not correspond to a triangle!" << endl;
    }

    return 0;
}
