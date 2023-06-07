#include <iostream>
#include <cmath>
#include <string>
using std::cout;
using std::cin;
using std::endl;

// ----------------ENCRYPT----------------
int encrypt( int number )
{
    int a = number / 1000;
    int b = ( number % 1000 ) / 100;
    int c = ( number % 100) / 10;
    int d = number % 10;

    a = ( a + 7 ) % 10;
    b = ( b + 7 ) % 10;
    c = ( c + 7 ) % 10;
    d = ( d + 7 ) % 10;

    return( c * 1000 + d * 100 + a * 10 + b );
}

// ----------------DECRYPT----------------
int decrypt( int number )
{

    int a = number / 1000;
    int b = ( number % 1000 ) / 100;
    int c = ( number % 100) / 10;
    int d = number % 10;

    a = ( a + 3 ) % 10;
    b = ( b + 3 ) % 10;
    c = ( c + 3 ) % 10;
    d = ( d + 3 ) % 10;

    return( c * 1000 + d * 100 + a * 10 + b );

}

int main()
{

    int number;

    cout << "\n\t\t******Number encryption and decryption program\n\n" << endl;

    cout << "Enter four digit numbers: ";
    cin >> number;

    cout << "\nEncrypted number is: " << encrypt( number ) << endl;

    cout << "\nNumber decrypted is: " << decrypt( encrypt( number)) << endl;

    cout << "\n" << endl;
    //-------------------SECOND_PROCEES-----------------------------------------------------
    char mesage[100] = {'a','b','c','d','e','f','g','h','i','j', 'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char x, y;
    long i, rot; // To count

    cout << "\n\t\t******Word encryption and decryption program\n\n" << endl;

    cout << "Type a Word: ";
    cin >> mesage;

    cout << "\nSet the amount of rotations: ";
    cin >> rot;


    /* ABCDEFGHIJKM  NOPQRSTUVWXYZ
       NOPQRSTUVWXYZ ABCDEFGHIJKM  */
// ----------------ENCRYPT----------------
    for(i = 0; mesage[i] != '\0'; i++)
    {
        x = mesage[i];

        if( x >= 'a' && x <= 'z' )
        {
            x = x + rot;

            if( x > 'z' )
            {
                x = x - 'z' + 'a' - 1;
            }

            mesage[i] = x;
        }
    }
    cout << "\nEcrypted message: " << mesage << endl;
// ----------------DECRYPT----------------
    for(i = 0; mesage[i] != '\0'; i++)
    {
        x = mesage[i];

        if( x >= 'a' && x <= 'z' )
        {
            x = x - rot;

            if( x < 'a' )
            {
                x = x + 'z' - 'a' + 1;
            }

            mesage[i] = x;
        }
        mesage[i] = x;
    }
    cout << "Decrypted message: " << mesage << endl;

    return 0;
}
