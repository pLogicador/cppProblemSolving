#include <iostream>
using std::cout;
using std::endl;

int main()
{

    int total = 0;

    // total even integers from 2 to 20
    for (int number = 2; number <= 20; number += 2)
        total += number;

    cout << "Sum is " << total << endl;

    return 0;
}
