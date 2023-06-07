#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main()
{
    double mileageDriven, quantityFuel, total_mileageDriven, total_quantityFuel;

    total_mileageDriven = 0;
    total_quantityFuel = 0;

    while( mileageDriven != -1 )
    {
        cout << "Enter the mileage ( -1 to quit ): ";
        cin >> mileageDriven;

        if( mileageDriven != -1 )
        {
            cout << "Enter with the fuel: ";
            cin >> quantityFuel;

            total_quantityFuel += quantityFuel;
            total_mileageDriven += mileageDriven;

            cout << setprecision(6) << fixed;

            cout << "MG of this tank: " << mileageDriven / quantityFuel << endl;
            cout << "Total MG: " << total_mileageDriven / total_quantityFuel << endl;
            cout << "\n";
        }
    }

    return 0;
}
