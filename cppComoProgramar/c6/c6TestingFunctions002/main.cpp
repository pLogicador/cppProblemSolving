// Argumento padrão
#include <iostream>
using namespace std;



void row( int siz = 10, char ch = '-' );




int main()
{

    row();
    row(20);
    row(30, '*');
    row( '*' );     // utilização errada



    return 0;
}



void row( int siz, char ch )
{
    for ( int i=0; i< siz; i++ )
    {
        cout << ch;
    }
    cout << endl;
}




