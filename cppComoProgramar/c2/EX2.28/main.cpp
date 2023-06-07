#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int digits;

    cout << "ENTER FOR A FIVE DIGITS: ";
    cin >> digits;

    // Separate the digits
    cout << "\t" << digits / 10000;
    cout << "\t" << digits / 1000 % 10;
    cout << "\t" << digits / 100 % 10;
    cout << "\t" << digits / 10 % 1000 % 100 % 10;
    cout << "\t" << digits % 10000 % 1000 % 100 % 10;

    return 0;
}
