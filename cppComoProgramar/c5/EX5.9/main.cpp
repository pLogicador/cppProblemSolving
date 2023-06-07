#include <iostream>
using namespace std;

int main()
{
    int product = 1;

    for ( int i = 2; i <= 15; i+=2 )
    {
        product *= i;
    }

    cout << "The product of even numbers between 1 and 15 is: " << product << endl;

    return 0;
}
