#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int value1 = 0, value2 = 0, multiple;

    cout << "Enter for a first number: ";
    cin >> value1;
    cout << "Enter for a second number: ";
    cin >> value2;


    if(value1%value2 == 0)
        cout << "\nThis value is a multiple!\n" << endl;
    else
        cout << "\nThis value not is a multiple!\n" << endl;

    return 0;
}
