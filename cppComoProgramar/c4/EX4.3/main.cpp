#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x, y, z, q, total, divisor;
    int count = 5;

    // Letra A
    x = 1;
    y = 5;
    z = 0;

    z = x++ + y;
    cout << "x = 1 and y = 5\n";
    cout << "z = x++ + y " << z << endl;

    cout << "\n\n";

    // Letra B
    if ( count > 10 )
         cout << "Count is greater than 10" << endl;
    cout << "count is " << count << endl;

    cout << "\n\n";

    // Letra C
    x = 5;
    y = 3;

    total = x - y;
    cout << "5 - 3 = " << total << endl;

    total -= --x;
    cout << "Total -= --x = " << total << endl;

    cout << "\n\n";

    // Letra D 1.1
    q = 5;
    divisor = 2;
    q %= divisor;
    cout << "q = 5\ndivisor = 2\nq %= divisor =" << q << endl;

    // 1.2
    q = 3;
    q = q % divisor;
    cout << "q = 3\ndivisor = 2\nq = q % divisor =" << q << endl;

    return 0;
}
