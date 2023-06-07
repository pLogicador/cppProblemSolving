/*

Uma aplicação da função floor é arredondar um valor para o inteiro mais próximo. A instrução
    y = floor( x + .5 );
arredonda o número x para o inteiro mais próximo e atribui o resultado a y. Escreva um programa que lê vários números e utiliza a
instrução anterior para arredondar cada um desses números para o inteiro mais próximo. Para cada número processado, imprima ambos
os números, o original e o arredondado.


*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double originalValueX;


    cout << "Enter a value (or -1 to terminate): ";
    cin >> originalValueX;

    while (originalValueX != -1)
    {
        double roundedValueY = floor(originalValueX + .5);
        cout << "Original: " << originalValueX
            << " and Rounded Value: " << roundedValueY << setprecision(2) << endl;

        // Continue the process
        cout << "Enter a value (or -1 to terminate): ";
        cin >> originalValueX;
    }

    return 0;
}
