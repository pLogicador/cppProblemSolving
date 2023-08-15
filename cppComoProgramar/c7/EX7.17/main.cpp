/*
    7.17 Escreva um programa que simula a rolagem de dois dados. O programa deve utilizar rand para rolar o primeiro dado e deve
    utilizar rand novamente para rolar o segundo dado. A soma dos dois valores deve ent�o ser calculada.

    [Nota: Cada dado pode mostrar um valor inteiro de 1 a 6, portanto a soma dos dois valores variar� de 2 a 12,
    com 7 sendo a soma mais freq�ente, e 2 e 12 sendo as somas menos freq�entes. A Figura 7.32 mostra as
    36 poss�veis combina��es de dois dados. Seu programa deve rolar os dois dados 36.000 vezes.
    Utilize um array unidimensional para contar o n�mero de vezes que cada poss�vel soma
    aparece. Imprima os resultados em um formato tabular. Al�m disso, determinar� se os
    totais s�o razo�veis (isto �, h� seis maneiras de rolar um 7, ent�o
    aproximadamente um sexto de todas as rolagens deve ser 7).]

*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int ROLLS = 36000;    // N�mero de vezes que os dados ser�o lan�ados,
    const int SIZE = 13;        // 0 a 12 para armazenar as somas poss�veis (�ndice 0 n�o ser� usado)

    int d1, d2;
    int sum = 0;
    int frequencies[SIZE] = {};     // Inicializa todos os elementos do array com zero


    srand( time(0) );       // Semente para gera��o de n�meros aleat�rios baseados no tempo atual



    /*  � iniciado um loop for que se repete 36.000 vezes (de 0 a 35.999).
        A vari�vel de controle i � usada para contar as itera��es do loop.*/
    for (int i = 0; i < ROLLS; i++)
    {
        // Simula a rolagem do primeiro e segundo dado (n�meros de 1 a 6)
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() % 6;

        // Calcula a soma dos valores dos dados
        sum = d1 + d2;

        frequencies[sum]++;     // Incrementa a frequ�ncia da soma no array

    }

    cout << "Soma\tFrequencias\n";
    /*  � iniciado outro loop for que percorre o array frequencies
        a partir do �ndice 2 at� o �ndice SIZE-1 (ou seja, de 2 a 12).*/
    for (int i = 2; i < SIZE; i++)
    {
        cout << i << "\t" << frequencies[i] << endl;
    }



    return 0;
}
