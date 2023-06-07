#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int value, impar, par;

    cout << "Enter for a first number: ";
    cin >> value;

    if(value%2 == 0)
        cout << "\nthis value is even!\n" << endl;
    else
        cout <<"\nthis value is odd!\n" << endl;

    return 0;
}
