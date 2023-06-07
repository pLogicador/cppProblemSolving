#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int integer1, integer2;

    cout << "Please, enter two integers: ";
    cin >> integer1 >> integer2;

    if(integer1 > integer2)
        cout << integer1 <<" is a higher value!\n";
    else
        if(integer2 > integer1)
            cout << integer2 << " is a higher value!\n";
    if(integer1 == integer2)
        cout << "These numbers are the same!\n";

    return 0;
}
