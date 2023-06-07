/*Sobrecarga de funções */
#include <iostream>
using namespace std;





void sum( int n1, int n2 );
void sum();



int main()
{
    sum(10,10);
    sum();




    return 0;
}



void sum( int n1, int n2 )
{
    int r;
    r = n1 + n2;
    cout << "\nThe Sum " << n1 << " and " << n2 << " = " << r << endl;

}


void sum()
{

    int n1;
    int n2;
    int r;

    n1 = 10;
    n2 = 20;
    r = n1 + n2;
    cout << "\nThe Sum " << n1 << " and " << n2 << " = " << r << endl;

}




