// Demonstrando as capacidades de comparação de string.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    // declaração de variável e objetos
    int result;
    string define1( "Testing the comparison functions." );
    string define2("Hello");
    string define3("stinger");
    string define4( define2 );

    cout << "\ndefine1: " << define1
    << "\ndefine2: " << define2
    << "\ndefine3: " << define3
    << "\ndefine4: " << define4 << "\n\n";

    // comparando define1 e define4
    if( define1 == define4 )
        cout << "define1  == define4\n";
    else
    {
        if( define1 > define4 )
            cout << "define1 > define4\n";
        else
        {
            cout << "define1 < define4\n";
        } // fim else-if
    }// fim else


    // comparando define1 e define2
    result = define1.compare( define2 );

    if( result == 0 )
        cout << "define1.compare( define2 ) == 0\n ";
    else // result != 0
    {
        if( result > 0 )
            cout << "define1.compare( define2 ) > 0\n";
        else
        {
            cout << "define1.compare( define2 ) < 0\n";
        } // fim else-if
    } // fim else


    // comparando define1 ( elementos 2 - 5 ) e define3 ( elementos 0 - 5 )
    result = define1.compare( 2, 5, define3, 0, 5 );

    if( result == 0 )
        cout << "define1.compare( 2, 5, define3, 0, 5 ) == 0\n";
    else // resultado != 0
    {
        if( result > 0 )
            cout << "define1.compare( 2, 5, define3, 0, 5 ) > 0\n";
        else
            cout << "define1.compare( 2, 5, define3, 0, 5 ) < 0\n";
    } // fim else


    // comparando define2 e define4
    result = define4.compare( 0, define2.length(), define2 );

    if( result == 0 )
        cout << "define4.compare( 0, define2.length(), define2 ) == 0" << endl;
    else // resultado != 0
    {
        if( result > 0 )
            cout << "define4.compare( 0, define2.length(), define2 ) > 0" << endl;
        else
            cout << "define4.compare( 0, define2.length(), define2 ) < 0" << endl;
    } // fim else



    // comparando define2 e define4
    result = define2.compare( 0, 3, define4 );

    if( result == 0 )
        cout << "define2.compare( 0, 3, define4 ) == 0" << endl;
    else // resultado != 0
    {
        if( result > 0 )
            cout << "define2.compare( 0, 3, define4 ) > 0" << endl;
        else
            cout << "define2.compare( 0, 3, define4 ) < 0" << endl;
    } // fim else

    return 0;
}
