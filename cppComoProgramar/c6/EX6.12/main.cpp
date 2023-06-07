/*

Um estacionamento cobra uma taxa m�nima de $ 2,00 para estacionar por at� tr�s horas. Um adicional de $ 0,50 por hora n�o necessariamente
inteira � cobrado ap�s as tr�s primeiras horas. A carga m�xima para qualquer dado per�odo de 24 horas � $ 10,00. Suponha que nenhum carro
fique estacionado por mais de 24 horas por vez. Escreva um programa que calcula e imprime os custos de estacionamento de cada um dos tr�s
clientes que estacionou o carro nessa garagem ontem. Voc� deve inserir as horas de estacionamento para cada cliente. Seu programa deve
imprimir os resultados em um formato tabular elegante e deve calcular e imprimir o total dos recibos de ontem. O programa deve utilizar
a fun��o calculateCharges para determinar a tarifa para cada cliente. Suas sa�das devem aparecer no seguinte formato:

Car       Hours    Charge
1           1.5      2.00
2           4.0      2.50
3          24.0     10.00
TOTAL      29.5     14.50

*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double calculaCobrancas( double horas );




int main()
{
    double primeiroHorario, segundoHorario, terceiroHorario;
    double total_cobranca = 0;
    double total_horas = 0;
    double cobranca;



    cout << "Please tell me how many hours your car was parked yesterday? ";
    cin >> primeiroHorario >> segundoHorario >> terceiroHorario;


    // total de cobran�a  e de horas dos 3 clientes
    total_cobranca += calculaCobrancas( primeiroHorario );
    total_horas += primeiroHorario;

    total_cobranca += calculaCobrancas( segundoHorario );
    total_horas += segundoHorario;

    total_cobranca += calculaCobrancas( terceiroHorario );
    total_horas += terceiroHorario;



    // tabela
    cout << left << setw(9) << "Carro" << setw(9) << right << "Horas" << setw(14) << "Cobranca" << endl;


    // clent1
    cout << fixed << left << setw(9) << "client1" << setw(9) << right
            << setprecision(1) << primeiroHorario << setw(14) << setprecision(2) << calculaCobrancas( primeiroHorario ) << endl;
    // client2
    cout << fixed << left << setw(9) << "client2" << setw(9) << right
            << setprecision(1) << segundoHorario << setw(14) << setprecision(2) << calculaCobrancas( segundoHorario ) << endl;
    // client3
    cout << fixed << left << setw(9) << "client3" << setw(9) << right
            << setprecision(1) << terceiroHorario << setw(14) << setprecision(2) << calculaCobrancas( terceiroHorario ) << endl;


    // tabela de totalidade
    cout << fixed << left << setw(9) << "Total"
        << setw(9) << right << setprecision(1) << total_horas << setw(14) << right << setprecision(2) << total_cobranca << endl;

    return 0;
}


double calculaCobrancas( double horas )
{
    double paga;
    if (horas <= 3.0 )
    {
        paga = 2.0;
    }
    else if ( horas <= 19.0 )
    {
        paga = (2.0 + (0.50) * ceil(horas - 3.0) );
    }
    else
        paga = 10.0;

    return paga;
};

