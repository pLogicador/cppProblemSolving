/*
(Hipotenusa) Defina uma função hypotenuse que calcula o comprimento da hipotenusa de um triângulo reto quando os outros dois lados
são dados. Utilize essa função em um programa para determinar o comprimento da hipotenusa para cada um dos triângulos mostrados
abaixo. A função deve aceitar dois argumentos double e retornar a hipotenusa como um double.

-------------------------------------
Triângulo | Lado 1     |      Lado 2|
-------------------------------------
1              3.0              4.0 |
2              5.0             12.0 |
3              8.0             15.0 |
-------------------------------------

*/


#include <iostream>
#include <cmath>
using namespace std;


double hypotenuse( double side1, double side2 );

int main()
{
    // Def var Triangle 1
    double Triangle1_Side1 = 3.0,  Triangle1_Side2 = 4.0;

    // Def var Triangle 2
    double Triangle2_Side1 = 5.0,  Triangle2_Side2 = 12.0;

    // Def var Triangle 3
    double Triangle3_Side1 = 8.0,  Triangle3_Side2 = 15.0;






    // Triangle 1
    cout << "The length of sides " << Triangle1_Side1 << " and " << Triangle1_Side2
        << " of the hypotenuse of a right triangle is: " << hypotenuse( Triangle1_Side1, Triangle1_Side2 ) << "\n"
            << endl;

    // Triangle 2
    cout << "The length of sides " << Triangle2_Side1 << " and " << Triangle2_Side2
        << " of the hypotenuse of a right triangle is: " << hypotenuse( Triangle2_Side1, Triangle2_Side2 ) << "\n"
            << endl;

    // Triangle 3
    cout << "The length of sides " << Triangle3_Side1 << " and " << Triangle3_Side2
        << " of the hypotenuse of a right triangle is: " << hypotenuse( Triangle3_Side1, Triangle3_Side2 )
            << endl;


    return 0;
}


double hypotenuse( double side1, double side2 )
{

    return sqrt( (side1 * side1) + (side2 * side2) );

}
