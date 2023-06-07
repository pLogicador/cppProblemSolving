#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int factorialBase( n )
{
    int counter = 1;
    int result = 1;

    while (counter <= n)
    {
        result = result * counter;
        counter++;
    }
    return result;
}

double estimateN( int accN )
{
    double result = 1;
    int counter = 1;

    while( counter <= accN )
    {
        result = result + 1.0 / factorialBase(counter);
        counter++;
    }
    return result;
}


double estimateNpowX(int accN, double x)
{
    double result = 1;
    int counter = 1;
    double powX = x;

    while (counter <= accN)
    {
        result = result + powX / factorialBase(counter);
        powX = powX * x;
        counter++;
    }
    return result;
}


int main()
{
    int n, accN;
    double x;

    // a)
    cout << "Enter factorial base: ";
	cin >> n;
	cout << "Factorial of " << n << " is: " << factorialBase(n)
	<< endl;

	// b)
	cout << "Enter desired accuracy of e and e^x: (<= 13) ";
	cin >> accN;
	cout << "Constant e with accuracy " << accN << " is: " << estimateN(accN)
	<< endl;

	// c)
	cout << "Enter x: ";
	cin >> x;
	cout << "e^" << x << " with accuracy " << accN << " is: " << estimateNpowX(accN, x)
	<< endl;

    return 0;
}
