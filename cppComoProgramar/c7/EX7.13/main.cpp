/*
    7.13 Escreva instruções simples que realizam as seguintes operações de um array unidimensional:
    a) Inicialize os 10 elementos do array de inteiros counts como zeros.
    b) Adicione 1 a cada um dos 15 elementos do array de inteiros bonus.
    c) Leia 12 valores para o array double monthlyTemperatures a partir do teclado.
    d) Imprima os 5 valores do array de inteiros bestScores em formato de coluna.

*/


#include <iostream>
using namespace std;

int main()
{

    // a)
    const int SIZEa = 10;
    int counts[ SIZEa ] = {0};

    cout << "a)\n";
    for ( int i = 0; i < SIZEa; i++ )
    {
        counts[i] = 0;
        cout << counts[i] << " ";
    }
    cout << "\n" << endl;



    // b)
    const int SIZEb = 15;
    int bonus[SIZEb] = {0}; // evita que o array contenha lixo de memória

    cout << "b)\n";
    for (int i = 0; i < SIZEb; i++)
    {
        bonus[i] += 1;
        cout << bonus[i] << " ";
    }
    cout << "\n" << endl;




    // c)
    const int SIZEc = 12;
    double monthlyTemperatures[SIZEc] = {0};

    cout << "c)\n";
    for(int i = 0; i < SIZEc; i++)
    {
        cin >> monthlyTemperatures[i];
        cout <<  monthlyTemperatures[i] << " ";
    }
    cout << "\n" << endl;




    // d)
    const int SIZEd = 5;
    int bestScores[SIZEd] = { 45, 86, 92, 32, 12 };

    cout << "d)\n";
    for (int i = 0; i < SIZEd; i++)
    {
        cout << "\t" <<  bestScores[i] << endl;
    }
    cout << "\n" << endl;




    return 0;
}
