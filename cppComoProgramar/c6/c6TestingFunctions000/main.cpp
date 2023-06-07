#include <iostream>
using namespace std;

// Place of presentations
// Deve-se prototipar(apresentar) antecipadamente as funções que são desenvolvidas após a função principal(main)

void sum( int n1, int n2 );
int sum2( int f1, int f2 );
void tr( string t[3] );






int main()
{


    sum(15,5);

    int r = sum2(12,20);
    cout << "\nThe r = " << r << endl;

    string transp[3] = { "car", "motorcycle", "boat" };
    tr(transp);



    return 0; // utilizado quando for diferente de 'void'
}






// Location of functions
// 'void' (não retorna nada)
void sum( int n1, int n2  ) // Valores passados por argumentos
{
    cout << "\nThe Sum is: " << n1 + n2 << endl;
}


int sum2( int f1, int f2 )
{
    return f1 + f2;
}


void tr( string t[3] )
{
    for ( int i = 0; i < 4; i++)
    {
        cout << t[i] << endl;
    }
}

