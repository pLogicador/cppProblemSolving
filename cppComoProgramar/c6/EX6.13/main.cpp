/*

Uma aplica��o da fun��o floor � arredondar um valor para o inteiro mais pr�ximo. A instru��o
    y = floor( x + .5 );
arredonda o n�mero x para o inteiro mais pr�ximo e atribui o resultado a y. Escreva um programa que l� v�rios n�meros e utiliza a
instru��o anterior para arredondar cada um desses n�meros para o inteiro mais pr�ximo. Para cada n�mero processado, imprima ambos
os n�meros, o original e o arredondado.


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
