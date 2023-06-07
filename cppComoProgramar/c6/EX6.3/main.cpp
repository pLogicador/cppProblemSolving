/*  EX 6.3
    Escreva um programa que testa se os exemplos da chamada de função da biblioteca de matemática mostrados na Figura 6.2 realmente
    produzem os resultados indicados
*/

#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <cmath>
using namespace std;


int main()
{

    cout << fixed << setprecision( 1 );

    cout << "sqrt(" << 900.0 << ") = " << sqrt( 900.0 ) << "\n";
    cout << "exp(" << 1.0 << ") " << setprecision( 6 ) << exp( 1.0 ) << "\n";
    cout << "log(" << 2.718282 << ") = " << setprecision( 1 ) << log( 2.718282 ) << "\n";
    cout << "log10(" << 1.0 << ") = " << log10( 1.0 ) << "\n";
    cout << "fabs(" << 13.5 << ") = " << fabs( 13.5 ) << "\n";
    cout << "ceil(" << 9.2 << ") = " << ceil( 9.2 ) << "\n";
    cout << "floor(" << 9.2 << ") = " << floor( 9.2 ) << "\n";
    cout << "pow(" << 2.0 << ", " << 7.0 << ") = " << pow( 2.0, 7.0 ) << "\n";
    cout << setprecision( 3 ) << "\n"
        << "fmod(" << 13.675 << ", " << 2.333 << ") = " << fmod( 13.675, 2.333  ) << "\n";
    cout << "sin(" << 0.0 << ") = " << sin( 0.0 ) << "\n";
    cout << "cos(" << 0.0 << ") = " << cos( 0.0 ) << "\n";
    cout << "tan(" << 0.0 << ") = " << tan( 0.0 ) << "\n"
        << endl;



    return 0;
}
