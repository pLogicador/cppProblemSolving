#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int arraySize = 10;               // a)
    double fractions[ arraySize ] = {0};    // b)

    fractions[3] = 5.5;                     // c) nomeando o quarto elemento do array

    double& fourthElement = fractions[3];  // d) referenciando o elemento quatro do array

    fractions[8] = 1.667;                   // e) Atribuindo o valor 1.667 ao elemento 9 do array
    fractions[6] = 3.333;                    // f) Atribuindo o valor 3.333 ao sétimo elemento do array




    cout << "\n\n" << endl;



    // g) Imprimindo os elementos do array 6 e 9 com dois dígitos de precisão à direita do ponto de fração decimal.
    cout << fixed << setprecision( 2 )
        << "Elemento do array 6 " << fractions[6] << endl;
    cout << "Elemento do array 9 " << fractions[8] << endl;


    for( int i = 0; i < arraySize; i++ )
    {
        cout << "Elemento " << i << ": " << fractions[i] << endl;
    }


    return 0;
}
