/*
Programa: EX6.30
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descrição: Escrevi um programa que determina e imprime todos os números primos entre 2 e 10.000.
             Para isso, ele utiliza a função isPrime para verificar se cada número no intervalo é primo.
             O programa conta o número de primos encontrados usando a variável count e imprime o total de números primos no final.
*/

#include <iostream>
#include <cmath>
using namespace std;


// Linha de prototipação de funções
bool isPrime( int );


int main()
{
    int count = 0;



    cout << "numeros primos entre 2 e 10.000" << endl;



    for ( int number = 2; number <= 10000; number++ )
    {
        if( isPrime( number ) )
        {
            cout << number << " ";
            count++;
        }
    }
    cout << endl;
    cout << "Total de numeros primos encontrados: " << count << endl;



    return 0;
}





bool isPrime( int number )
{
    if ( number <= 1 )
    {
        return false;
    }


    int sqrtNum = sqrt( number );

    for ( int i = 2;  i <= sqrtNum; i++ )
    {
        if ( number%i == 0 )
        {
            return false;
        }
    }
    return true;

};


/*
    1.  A função isPrime recebe um número inteiro 'number' como parâmetro.
    2.  Se 'number' for menor ou igual a 1, retornamos false porque números menores ou iguais a 1 não são considerados primos.

    3.  Inicializamos sqrtN com a raiz quadrada de 'number'. Isso ocorre porque, se 'number' for divisível por algum número maior que
        sua raiz quadrada, então também será divisível por um número menor que sua raiz quadrada.

    4.  Em seguida, percorremos de 2 até sqrtN e verificamos se 'number' é divisível por algum número i. Se for, retornamos
        false porque 'number' não é primo.

        OBS: O "i" é a variável de iteração do loop utilizado para verificar se o número "number" é divisível por
        algum valor entre 2 e a raiz quadrada de "number".

    5.  Se nenhum divisor for encontrado, retornamos true, indicando que 'numero' é primo.


    REGRA e DETALHE DO ALGORITMO:
    A regra é que um número primo só é divisível por 1 e por ele mesmo. Portanto, para verificar se um número "number" é primo,
    é suficiente testar a divisibilidade por todos os possíveis divisores entre 2 e a sua raiz quadrada (arredondada para baixo).

    Isso ocorre porque, se um número "number" for composto, ele será divisível por um par de fatores que estão ambos entre
    2 e a sua raiz quadrada. Suponha que "number" seja divisível por um fator "a" e "b", onde "a" é menor ou igual a "b".
    Se "a" fosse maior que a raiz quadrada de "number", então "b" seria menor que a raiz quadrada de "number",
    o que significa que "number" já teria sido verificado como divisível por "b" durante o loop. Portanto,
    não é necessário verificar divisibilidade por números maiores que a raiz quadrada de "number".


*/





