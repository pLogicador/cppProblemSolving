#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    int number, rank, firstNumber, lastNumber;
    string nameUser;

    rank = 10000;
    bool result = true;

    cout << "\t\t*****FIVE-DIGIT PALINDROME CHECK*****\n\n" << endl;
    cout << "Hello, what's your name? ";
    getline(cin, nameUser);

    cout << "\nHello, " << nameUser << "! Please, enter five digits to start verification: ";
    cin >> number;

    while ( number > 99999 )
    {
        firstNumber = number / rank;
        lastNumber = number % 10;

        if ( firstNumber != lastNumber )
        {
            result = false;
        }

        else
        {
            number = (number % rank) / 10;
            rank = rank / 100;
        }
    }

    if ( result == 1 )
    {
        cout << "\nThis number is palindrome!" << endl;
    }
    else
    {
        cout << "This number ISN'T palindrome" << endl;
    }


    return 0;
}
