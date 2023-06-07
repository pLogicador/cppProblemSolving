#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x = 5, product = 5, quotient = 5;

    // A;
    product *= x++;
    cout << "Value of product after calculation: " << product << endl;
    cout << "Value of x after calculation: " << x << endl;

    // B;
    x = 5;
    quotient /= ++x;
    cout << "Value of product after calculation: " << product << endl;
    cout << "Value of x after calculation: " << x << endl;

    return 0;
}
