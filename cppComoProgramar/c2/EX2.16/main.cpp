#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number1, number2, quotient, product, sum;

    cout << "Please, enter number 1: ";
    cin >> number1;
    cout << "Please, enter number 2: ";
    cin >> number2;

    sum = number1 + number2;
    quotient = number1 / number2;
    product = number1 * number2;

    if(number1 == number2)
        cout << "\nEquivalent values cannot!\n" <<endl;

    cout << "This is the sum of the products: " << sum;
    cout <<"\n";
    cout << "This is the product of the products: " << product;
    cout <<"\n";
    cout << "This is the defference between of the products: " << number2 - number1;
    cout <<"\n";
    cout << "This is the quotient of the numbers: " << quotient << endl;

    return 0;
}
