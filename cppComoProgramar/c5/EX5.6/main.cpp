#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setprecision;


int main()
{

    int sum = 0;
    int counter = 0;
    int number;

    cout << "°° Important: Enter integer values, but if you want to stop, enter 9999 °°" << endl;

    for ( ;; ) // output determined if sentinel value is entered
    {
        cout << "\n°°" << " Number: ";
        cin >> number;

        if (number == 9999)
        {
            break;
        }
        sum += number;
        counter++;
    }

    cout << "\nAverage of " << counter << " entered integers is: "
        << fixed << setprecision(2) << static_cast<double>(sum)/counter << endl;


    return 0;
}
