/*

A fun��o floor pode ser utilizada para arredondar um n�mero para uma casa decimal espec�fica. A instru��o
y = floor( x * 10 + .5 ) / 10;

arredonda x para a casa decimal (a primeira posi��o � direita do ponto de fra��o decimal). A instru��o
y = floor( x * 100 + .5 ) / 100;

arredonda x para a casa dos cent�simos (isto �, a segunda posi��o � direita do ponto de fra��o decimal).
Escreva um programa que define quatro fun��es para arredondar um n�mero x de v�rias maneiras:

a) roundToInteger( number )
b) roundToTenths( number )
c) roundToHundredths( number )
d) roundToThousandths( number )

Para cada valor lido, seu programa deve imprimir o valor original, o n�mero arredondado para o
inteiro mais pr�ximo, o n�mero arredondado para o d�cimo mais pr�ximo, o n�mero arredondado para o
cent�simo mais pr�ximo e o n�mero arredondado para o mil�simo mais pr�ximo.

*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



double roundToInteger( double );
double roundToTenths( double );
double roundToHundredths( double number );
double roundToThousandths( double number );

int main()
{
    double x;

    cout << "Enter a number (or -1 to exit): ";
    cin >> x;

    while ( x != -1 )
    {

        cout << x << left << setw(9)
            << roundToInteger(x) << setw(15)
                << roundToTenths(x) << setw(15)
                    << roundToHundredths(x) << setw(15)
                        << roundToThousandths(x) << endl;

        cout << "Enter a next number (or -1 to exit): ";
        cin >> x;

    }


    return 0;
}


double roundToInteger( double number )
{
    return floor( number + .5 );
}

double roundToTenths( double number )
{
    return floor( number * 10 + .5 ) / 10;
}

double roundToHundredths( double number )
{
    return floor( number * 100 + .5 ) / 100;
}

double roundToThousandths( double number )
{
    return floor( number * 1000 + .5 ) / 1000;
}




