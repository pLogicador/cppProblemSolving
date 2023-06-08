/*
Programa: EX6.34
  Autor: Pedro Miranda
  Data: 07/06/2023
  Descrição: Escrevi um programa que simula o lançamento de uma moeda. Para cada lançamento da moeda,
                o programa deve imprimir Heads ou Tails (cara ou coroa). Defini o programa para
                lançar a moeda 100 vezes e contar o número de vezes que cada lado da moeda aparece.
                Ao final, é revelado os resultados. O programa principal chama a função flip separada que
                não aceita nenhum argumento e retorna 0 para coroa e 1 para cara.

*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int flip();





int main()
{
    // Inicialização da semente do gerador de números aleatórios
    srand( time(0) );

    int nFlips = 100;

    /* As variáveis abaixo são inicializadas como 0, pois elas serão usadas para
        contar o número de vezes que cada lado da moeda aparece.*/
    int headsCount = 0;
    int tailsCount = 0;




    // Realizando o lançamento da moeda
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




// Função que simula o laçamento da moeda
int flip()
{
    // Gerando um número aleatório entre 0 e 1
    int result = rand() % 2;    // 0 para Heads e 1 para Tails

    return result;

};






