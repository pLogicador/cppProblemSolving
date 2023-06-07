#include <iostream>
#include <iomanip> // biblioteca para manipuladores de formato
using namespace std;

int main()
{
	double factorial = 1;

    for (int i = 1; i <= 20; i++)
    {
        cout << i << "\t";
        factorial = 1;

        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }

        cout <<  fixed << setprecision(0) << factorial << endl;
    }

    return 0;
}
