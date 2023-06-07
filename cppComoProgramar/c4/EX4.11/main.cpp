#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// corrigindo erros de sintaxe
int main()
{
    //a
    if( age >= 65 )
    {
        cout << "Age is greater than or equal to 65" << endl;
    }

    //b
    if( age >= 65 )
    {
        cout << "Age is greater than or equal to 65" << endl;
    }
    else
    {
        cout << "Age is less than 65" << endl;
    }

    //c
    int x = 1;
    int total = 0;

    while ( x <= 10 )
    {
        total += x;
        cout << x << endl;
        x++;
    }

    //d
    while( x <= 10 )
    {
        total += x;
        x++;
    }

    //e
    int y = 5;

    while( y > 0 )
    {
        cout << y << endl;
        y--;
    }

    return 0;
}
