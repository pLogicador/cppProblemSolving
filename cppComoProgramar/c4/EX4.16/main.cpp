#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main()
{
    double taxaHoraria, taxaHoraExtra, salario, horaNormal;
    int horasTrabalhadas;

    horasTrabalhadas = 0;
    taxaHoraria = 0;
    taxaHoraExtra = 1.5;
    salario = 0;
    horaNormal = 40;


    cout << "Entre com as horas trabalhadas (-1 para terminar): ";
    cin >>  horasTrabalhadas;

    while( horasTrabalhadas != -1 )
    {

        cout << "Entre com o valor por hora trabalhada ($00.00): ";
        cin >> taxaHoraria;

        if( horasTrabalhadas > horaNormal )
        {
            salario = horaNormal * taxaHoraria + ( horasTrabalhadas - horaNormal ) * taxaHoraria * taxaHoraExtra;
        }
        else
            salario = horasTrabalhadas * taxaHoraria;

        cout << setprecision(2) << fixed;
        cout << "Salario $" << salario << endl;

        cout << "\n\n";

        cout << "Entre com as horas trabalhadas (-1 para terminar): ";
        cin >>  horasTrabalhadas;
    }

    return 0;
}
