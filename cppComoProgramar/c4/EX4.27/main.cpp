#include <iostream>
using std::cout;
using std::cin;
using std::endl;



int main()
{
    int binary, decimal, currRank, digit;
    decimal = 0;
    currRank = 1;

    cout << "Enter a binary number (only 0's and 1's, maximum 10 digits long): ";
    cin >> binary;

    while (binary > 0)
    {
        digit = binary % 10; //take the rightmost number.
        decimal = decimal + digit * currRank;
        binary = binary / 10;
        currRank = currRank * 2;
    }
    cout << "The decimal equivalent of the entered number is: " << decimal << endl;

    return 0;
}
