#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x, y;

    cout << "Enter value x and y\n" << endl;
    cin >> x;
    cin >> y;

    int i = 1, power = 1;

    power *= x;// or power = power * x;

    i++;
    if( i <= y )
        cout << "i = 1\ni <= " << y << endl;
    else
        cout << "i = 1\ni > " << y << endl;

    cout << "\n\n";

    cout << "Power: " << power << endl;

    return 0;
}
