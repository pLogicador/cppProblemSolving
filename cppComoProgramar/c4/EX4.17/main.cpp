
// 4.17 & 4.19
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main()
{
    int counter;
    double number, largest, smallest;

    counter = 0;
    number = 0;
    largest = 0;
    smallest = 0;

    while( counter < 10 )
    {
        cout << "Current number: ";
        cin >> number;

        if( number > largest )
        {
            largest = number;
        }
        if( number < smallest )
        {
            smallest = number;
        }

        counter++;
    }

    cout << "\n\n";

    cout << "The largest number among the 10 numbers input is: " << largest << endl;
    cout << "The smallest number among the 10 numbers input is: " << smallest << endl;

    return 0;
}
