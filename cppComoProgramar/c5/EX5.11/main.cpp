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
    double principal = 1000.0;
    double rate; // taxa de juros

    for (rate = 0.05; rate <= 0.1; rate += 0.01)
    {
        // display headers
        cout << "Compound interest with rate " << rate << endl;

        cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;

        cout << fixed << setprecision( 2 );

        // calculate amount on deposit for each of ten years
        for (int year = 1; year <= 10; ++year)
        {
            amount = principal * pow(1.0 + rate, year);

            cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
        }
    }

    return 0;
}
