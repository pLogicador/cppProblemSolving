/*
Programa: EX6.26
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descrição: Neste programa foi escrito uma função que aceita a hora como três argumentos do tipo inteiro (horas, minutos e segundos)
  e retorna o número de segundos desde a última vez que o relógio ‘deu 12’.
  Utilizei a função para calcular a quantidade de tempo em segundos entre duas horas,
  ambas as quais estão dentro de um ciclo de 12 horas.
*/


#include <iostream>
using namespace std;

// Linha de prototipação de funções
int secondsSinceNoon( int, int, int );
int secondsBetweenHours( int, int, int, int, int, int );


int main()
{
    // Declaração e inicialização das variáveis
    int h1 = 1;
    int m1 = 45;
    int s1 = 0;

    int h2 = 6;
    int m2 = 10;
    int s2 = 0;



    int seconds = secondsBetweenHours( h1, m1, s1, h2, m2, s2 );

    cout << "Segundos entre as duas horas: " << seconds << endl;

    return 0;
}





int secondsSinceNoon( int hours, int minutes, int seconds )
{
    int secondTotals = 0;

    secondTotals += hours * 3600;   // coverte as horas em segundos
    secondTotals += minutes * 60;   // coverte os minutos em segundos

    secondTotals += seconds;        // adiciona os segundos
    secondTotals %= 43200;          // Calcula os segundos desde o último meio-dia (12 horas = 43200 segundos)


    return secondTotals;

};


int secondsBetweenHours( int h1, int m1, int s1, int h2, int m2, int s2 )
{
    /* É calculado os segundos desde o último meio-dia para cada uma das horas anteriormente inicializadas,
        subtraído-as para obter a diferença correta em segundos entre as duas horas*/
    int difference = secondsSinceNoon( h2, m2, s2 ) - secondsSinceNoon( h1, m1, s1 );


    // Verifica se a diferença entre as horas é negativa
    if ( difference < 0 )
    {
        // Caso seja, é adicionado 43200 (12 horas em segundos) para garantir um valor positivo
        difference += 43200;
    }
    return difference;
};




