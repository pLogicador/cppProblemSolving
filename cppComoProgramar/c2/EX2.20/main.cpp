#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int raio, diametro, valor, circunferencia, area;
    const double pi = 3.14159;

    cout << "INFORME O VALOR DO RAIO: ";
    cin >> raio;
    // calculo do diametro
    diametro = 2 * raio;
    // circunferencia
    circunferencia = (2 * raio)* pi;
    // calculo daa area do círculo
    area = pi * (2 * raio);

    cout << "O VALOR DO DIAMETRO EH " << diametro;
    cout << "\n\n";
    cout << "O VALOR DO CIRCUNFERENCIA EH " << circunferencia;
    cout << "\n\n";
    cout << "O VALOR DA AREA DO CIRCULO EH " << area << endl;

    return 0;
}
