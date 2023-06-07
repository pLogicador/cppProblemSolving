/*  6.10
    Escreva um programa completo que solicita ao usuário o raio de uma esfera e calcula e imprime o volume dessa esfera. Utilize uma função
    inline sphereVolume que retorna o resultado da seguinte expressão: ( 4.0 / 3.0 ) * 3.14159 * pow( radius, 3 ).
*/

#include <iostream>
using namespace std;

#include <cmath>
using std::pow;

const double PI = 3.14159;  // CONSTANTE GLOBAL PI DEFINIDA

inline double sphereVolume( const double radius );

int main()
{

    double radiusValue;

    cout << "Enter the length of the radius of your sphere: ";
    cin >> radiusValue;

    cout << "Volume of sphere with radius " << radiusValue << " is " << sphereVolume( radiusValue )
        << endl;


    return 0;
}


inline double sphereVolume( const double radius )
{
    return 4.0 / 3.0 * PI * ( radius, 3 );
}

