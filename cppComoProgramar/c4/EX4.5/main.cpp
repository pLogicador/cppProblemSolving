#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int sum = 0, x = 1;

    while( x <= 10 )
    {
        sum += x;
        cout << "\nWhile x is less than 10\nsum is " << sum;
        x++;
    }

    cout << "\n\n";

    cout << "After finishing the loop at 11\nThe sum is " << sum << endl;

    return 0;
}
