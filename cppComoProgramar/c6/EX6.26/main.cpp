/*
Programa: EX6.26
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descri��o: Neste programa foi escrito uma fun��o que aceita a hora como tr�s argumentos do tipo inteiro (horas, minutos e segundos)
  e retorna o n�mero de segundos desde a �ltima vez que o rel�gio �deu 12�.
  Utilizei a fun��o para calcular a quantidade de tempo em segundos entre duas horas,
  ambas as quais est�o dentro de um ciclo de 12 horas.
*/


#include <iostream>
using namespace std;

// Linha de prototipa��o de fun��es
int secondsSinceNoon( int, int, int );
int secondsBetweenHours( int, int, int, int, int, int );


int main()
{
    // Declara��o e inicializa��o das vari�veis
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
    secondTotals %= 43200;          // Calcula os segundos desde o �ltimo meio-dia (12 horas = 43200 segundos)


    return secondTotals;

};


int secondsBetweenHours( int h1, int m1, int s1, int h2, int m2, int s2 )
{
    /* � calculado os segundos desde o �ltimo meio-dia para cada uma das horas anteriormente inicializadas,
        subtra�do-as para obter a diferen�a correta em segundos entre as duas horas*/
    int difference = secondsSinceNoon( h2, m2, s2 ) - secondsSinceNoon( h1, m1, s1 );


    // Verifica se a diferen�a entre as horas � negativa
    if ( difference < 0 )
    {
        // Caso seja, � adicionado 43200 (12 horas em segundos) para garantir um valor positivo
        difference += 43200;
    }
    return difference;
};




