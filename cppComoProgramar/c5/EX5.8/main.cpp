#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int smallerNumber = INT_MAX;
    int counter;
    int number;

    cout << "Enter the number of entries: ";
    cin >> counter;

    for (int i = 1; i <= counter; i++)
    {
        cout << "°° Number: ";
        cin >> number;

        if(number < smallerNumber )
        {
            smallerNumber = number;
        }
    }

    cout << "\nSmallest of entered numbers is:" << smallerNumber << endl;

    return 0;
}
