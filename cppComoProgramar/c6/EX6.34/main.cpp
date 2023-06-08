/*
Programa: EX6.34
  Autor: Pedro Miranda
  Data: 07/06/2023
  Descri��o: Escrevi um programa que simula o lan�amento de uma moeda. Para cada lan�amento da moeda,
                o programa deve imprimir Heads ou Tails (cara ou coroa). Defini o programa para
                lan�ar a moeda 100 vezes e contar o n�mero de vezes que cada lado da moeda aparece.
                Ao final, � revelado os resultados. O programa principal chama a fun��o flip separada que
                n�o aceita nenhum argumento e retorna 0 para coroa e 1 para cara.

*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int flip();





int main()
{
    // Inicializa��o da semente do gerador de n�meros aleat�rios
    srand( time(0) );

    int nFlips = 100;

    /* As vari�veis abaixo s�o inicializadas como 0, pois elas ser�o usadas para
        contar o n�mero de vezes que cada lado da moeda aparece.*/
    int headsCount = 0;
    int tailsCount = 0;




    // Realizando o lan�amento da moeda
    for ( int i = 0; i < nFlips; i++ )
    {
        int result = flip();


        if ( result == 0 )
        {
            cout << "Tails ";
            tailsCount++;
        }
        else
        {
            cout << "Heads ";
            headsCount++;
        }
    }
    cout << "\n";



    // Imprimindo os resultados na tela, mostrando quantas vezes cada lado da moeda apareceu.
    cout << "Heads: " << headsCount << "\n"
        << "\nTails: " << tailsCount << "\n" << endl;


    return 0;
}




// Fun��o que simula o la�amento da moeda
int flip()
{
    // Gerando um n�mero aleat�rio entre 0 e 1
    int result = rand() % 2;    // 0 para Heads e 1 para Tails

    return result;

};






