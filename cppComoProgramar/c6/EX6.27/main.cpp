/*
Programa: EX6.27
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descrição: Este  programa implementa a coversão enre temperaturas Celsius e Fahrenheit
                a) A função celsius retorna o equivalente em Celsius de uma temperatura em Fahrenheit.
                b) A função fahrenheit retorna o equivalente em Fahrenheit de uma temperatura em Celsius.
                c) no programa principal é escrito o gráfico para mostrar os equivalentes em
                Fahrenheit de todas as temperaturas em Celsius de 0 a 100 graus e os equivalentes em
                Celsius de todas as temperaturas em Fahrenheit de 32 a 212 graus.

                Todas as saídas são escritas em um formato tabular elegante que minimiza o número de linhas de saída,
                trazendo mais legibilidade.
*/




#include <iostream>
#include <iomanip>
using namespace std;



// Linha de prototipação de funções
double celsius( double );
double fahrenheit( double );
void writeChartHeader();



int main()
{

    int c;
    double f;




    /*O programa imprime a tabela de conversão de Celsius para Fahrenheit, juntamente com os
        equivalentes em Celsius para as temperaturas em Fahrenheit no intervalo especificado. */

    writeChartHeader();   // Desenha título

    for( c = 0; c <= 100; c++ )
    {
        f = fahrenheit( c );
        cout << setw(10) << left << c << setw(10) << fixed << setprecision(2) << f << "\t\t";


        if ( f >= 32 && f <= 212 )
        {
            double c_equiv = celsius( f );
            cout << setw(13) << left << fixed << setprecision(2) << f
                << setw(10) << left << fixed << setprecision(2) << c_equiv;

        }
        cout << endl;

    }


    return 0;
}





double celsius( double fahrenheit )
{
    // Retorna a fórmula de coversão de Fahrenheit para Celsius
    return ( fahrenheit - 32.0 ) * 5.0 / 9.0;

};


double fahrenheit( double celsius )
{
    // Retorna a fórmula de coversão de Celsius para Fahrenheit
    return celsius * 9.0 / 5.0 + 32.0;
};


void writeChartHeader()
{
    cout << "\tTabela de conversao Celsius - Fahrenheit\n" << endl;

    cout << setw(10) << left << "Celsius" << setw(10) << left << "Fahrenheit\t\t"
        << setw(10) << left << "Fahrenheit" << setw(10) << right << "Celsius" << endl;

    cout << setw(10) << left << "-------------------------\t" << setw(10) << left << "-------------------------" << endl;
};



