#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int side1, side2, hypotenuse;

    for ( side1 = 1; side1 <= 500; side1++ )
    {
        for (side2 = 2; side2 <= 500; side2++)
        {
            for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++ )
            {
                if ( side1 * side1 + side2 * side2 == hypotenuse * hypotenuse)
                {
                    cout << setw(8) << side1 << setw(8) << side2 << setw(8) << hypotenuse
                        << endl;
                }
            }
        }
    }

    return 0;
}
