/*
Programa: EX6.30
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descri��o: Escrevi um programa que determina e imprime todos os n�meros primos entre 2 e 10.000.
             Para isso, ele utiliza a fun��o isPrime para verificar se cada n�mero no intervalo � primo.
             O programa conta o n�mero de primos encontrados usando a vari�vel count e imprime o total de n�meros primos no final.
*/

#include <iostream>
#include <cmath>
using namespace std;


// Linha de prototipa��o de fun��es
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
    1.  A fun��o isPrime recebe um n�mero inteiro 'number' como par�metro.
    2.  Se 'number' for menor ou igual a 1, retornamos false porque n�meros menores ou iguais a 1 n�o s�o considerados primos.

    3.  Inicializamos sqrtN com a raiz quadrada de 'number'. Isso ocorre porque, se 'number' for divis�vel por algum n�mero maior que
        sua raiz quadrada, ent�o tamb�m ser� divis�vel por um n�mero menor que sua raiz quadrada.

    4.  Em seguida, percorremos de 2 at� sqrtN e verificamos se 'number' � divis�vel por algum n�mero i. Se for, retornamos
        false porque 'number' n�o � primo.

        OBS: O "i" � a vari�vel de itera��o do loop utilizado para verificar se o n�mero "number" � divis�vel por
        algum valor entre 2 e a raiz quadrada de "number".

    5.  Se nenhum divisor for encontrado, retornamos true, indicando que 'numero' � primo.


    REGRA e DETALHE DO ALGORITMO:
    A regra � que um n�mero primo s� � divis�vel por 1 e por ele mesmo. Portanto, para verificar se um n�mero "number" � primo,
    � suficiente testar a divisibilidade por todos os poss�veis divisores entre 2 e a sua raiz quadrada (arredondada para baixo).

    Isso ocorre porque, se um n�mero "number" for composto, ele ser� divis�vel por um par de fatores que est�o ambos entre
    2 e a sua raiz quadrada. Suponha que "number" seja divis�vel por um fator "a" e "b", onde "a" � menor ou igual a "b".
    Se "a" fosse maior que a raiz quadrada de "number", ent�o "b" seria menor que a raiz quadrada de "number",
    o que significa que "number" j� teria sido verificado como divis�vel por "b" durante o loop. Portanto,
    n�o � necess�rio verificar divisibilidade por n�meros maiores que a raiz quadrada de "number".


*/





