#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int sum = 0;
    int count;
    int number;


    cout << "Enter the count number: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "°" << i+1 << "° Number: ";
        cin >> number;

        sum += number;
    }

    cout << "\nSum of " << count << " entered integers is: " << sum << endl;

    return 0;
}
