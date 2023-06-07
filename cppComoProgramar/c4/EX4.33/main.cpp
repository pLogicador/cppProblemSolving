#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double a, b, c;
    bool result;

    cout << "Enter length of 3 segments: ";
    cin >> a, b, c;

    result = ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b));

    if( result )
        cout << "This segments could represent sides of the right triangle!"
        << endl;
    else
        cout << "This segments could NOT represent sides of the right triangle"
        << endl;
    return 0;
}
