/*

A função floor pode ser utilizada para arredondar um número para uma casa decimal específica. A instrução
y = floor( x * 10 + .5 ) / 10;

arredonda x para a casa decimal (a primeira posição à direita do ponto de fração decimal). A instrução
y = floor( x * 100 + .5 ) / 100;

arredonda x para a casa dos centésimos (isto é, a segunda posição à direita do ponto de fração decimal).
Escreva um programa que define quatro funções para arredondar um número x de várias maneiras:

a) roundToInteger( number )
b) roundToTenths( number )
c) roundToHundredths( number )
d) roundToThousandths( number )

Para cada valor lido, seu programa deve imprimir o valor original, o número arredondado para o
inteiro mais próximo, o número arredondado para o décimo mais próximo, o número arredondado para o
centésimo mais próximo e o número arredondado para o milésimo mais próximo.

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




