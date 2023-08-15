/*
    7.17 Escreva um programa que simula a rolagem de dois dados. O programa deve utilizar rand para rolar o primeiro dado e deve
    utilizar rand novamente para rolar o segundo dado. A soma dos dois valores deve então ser calculada.

    [Nota: Cada dado pode mostrar um valor inteiro de 1 a 6, portanto a soma dos dois valores variará de 2 a 12,
    com 7 sendo a soma mais freqüente, e 2 e 12 sendo as somas menos freqüentes. A Figura 7.32 mostra as
    36 possíveis combinações de dois dados. Seu programa deve rolar os dois dados 36.000 vezes.
    Utilize um array unidimensional para contar o número de vezes que cada possível soma
    aparece. Imprima os resultados em um formato tabular. Além disso, determinará se os
    totais são razoáveis (isto é, há seis maneiras de rolar um 7, então
    aproximadamente um sexto de todas as rolagens deve ser 7).]

*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int ROLLS = 36000;    // Número de vezes que os dados serão lançados,
    const int SIZE = 13;        // 0 a 12 para armazenar as somas possíveis (índice 0 não será usado)

    int d1, d2;
    int sum = 0;
    int frequencies[SIZE] = {};     // Inicializa todos os elementos do array com zero


    srand( time(0) );       // Semente para geração de números aleatórios baseados no tempo atual



    /*  É iniciado um loop for que se repete 36.000 vezes (de 0 a 35.999).
        A variável de controle i é usada para contar as iterações do loop.*/
    for (int i = 0; i < ROLLS; i++)
    {
        // Simula a rolagem do primeiro e segundo dado (números de 1 a 6)
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() % 6;

        // Calcula a soma dos valores dos dados
        sum = d1 + d2;

        frequencies[sum]++;     // Incrementa a frequência da soma no array

    }

    cout << "Soma\tFrequencias\n";
    /*  É iniciado outro loop for que percorre o array frequencies
        a partir do índice 2 até o índice SIZE-1 (ou seja, de 2 a 12).*/
    for (int i = 2; i < SIZE; i++)
    {
        cout << i << "\t" << frequencies[i] << endl;
    }



    return 0;
}
