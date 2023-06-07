#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <cmath>
using std::pow;


int main()
{
    double amount;
    double principal = 24.0;
    double rate = .05;

    cout << "Year" << setw( 24 ) << "Amount on deposit" << endl;


    cout << fixed << setprecision( 2 );
    for ( rate = .05; rate <= 0.1; rate += 0.01 )
    {
        for (int year = 1; year <= 384; year++)
        {
            amount = principal * pow(1.0 + rate, year);

            cout << setw( 4 ) << year << setw( 24 )
                << amount << endl;
        }
    }

    return 0;
}
