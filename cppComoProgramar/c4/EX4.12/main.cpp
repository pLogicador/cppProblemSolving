#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int y;
    int x = 1;
    int total = 0;

    while( x <= 10 ) //loop 10vzs
    {
        y = x * x;

        cout << y << endl;

        total += y; // cacula total em cada loop
        x++; // x é incrementado
    }

    cout << "Total is" << total << endl;

    return 0;
}
