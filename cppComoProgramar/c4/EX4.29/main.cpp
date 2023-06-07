#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// infinite loop
int main()
{

    int number = 2;

    while (true)
    {
        cout << number;
        number = number * 2;
    }

    return 0;
}
