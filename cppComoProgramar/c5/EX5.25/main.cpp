#include <iostream>
using namespace std;

int main()
{
    int counter;

    for (counter = 1; counter <= 10; ++counter)
    {
        if (5 == counter)
        {
            counter = 10;
        }
        else{
            cout << counter << " ";
        }
    }

    cout << "\nBroke out of loop at count = " << counter << endl;

    return 0;
}
