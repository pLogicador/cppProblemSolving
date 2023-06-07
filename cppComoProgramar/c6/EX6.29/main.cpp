/*

Programa: EX6.29
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descri��o: Escrevi uma fun��o 'perfect' que determina se o par�metro number � um n�mero perfeito.
                Essa fun��o � chamada em um programa que determina e imprime todos os n�meros perfeitos entre 1 e 1.000.
                Ele imprime os fatores de cada n�mero perfeito para confirmar se o n�mero � de fato perfeito.

*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;



// Linha de prototipa��o de fun��es
bool isPerfect( int number );
void printFactors( int number );




int main()
{
    // Linha de declara��o de vari�veis
    int number;



    cout << "Numeros perfeitos entre 1 e 1.000:\n" << endl;


    for ( number = 1; number <= 1000; number++ )
    {
        if ( isPerfect( number ) )
        {
            cout << number << " eh um numero perfeito.\n" << endl;
            printFactors( number );
        }
    }



    return 0;
}





bool isPerfect( int number )
{
    int i;
    int sum = 1;    // inicia com o fator 1
    int sqrtNum = sqrt( number );



    for( i = 2; i <= sqrtNum; i++ )
    {
        /* Se o n�mero for divis�vel por i, isso significa que i � um fator.
            Ent�o adicionamos i � soma*/
        if ( number%i == 0)
        {
            sum += i;

            /* Se i n�o for igual a number / i, tamb�m adicionamos number / i � soma.*/
            if ( i != number/i )
            {
                sum += number/i;
            }
        }
    }
    /*  Ap�s o loop, verificamos se a soma � igual ao n�mero. Se for, retornamos true,
        indicando que o n�mero � perfeito. Caso contr�rio, retornamos false.*/
    return sum == number;

};





/*  Imprimimos os fatores de um n�mero perfeito. Iteramos de 1 at� o n�mero (exclusivo) e,
    se o n�mero for divis�vel por i, imprimimos i.
*/
void printFactors( int number )
{
    int i;
    cout << "Fatores de " << number << ": ";


    for ( i = 1; i <= number; i++ )
    {
        if ( number%i == 0 )
        {
            cout << i << ", ";
        }
    }
    cout << endl;

};


/*
        OBS PARA A FUN��O isPerfect:

        1. number % i:  Essa express�o retorna o resto da divis�o de number por i.
                        Se o resto for igual a zero, isso significa que i � um fator de number,
                         pois number � divis�vel por i sem deixar resto.

        2. number / i:  Essa express�o realiza a divis�o inteira de number por i.
                        O resultado � o quociente da divis�o. Essa opera��o �
                        utilizada para encontrar o outro fator correspondente quando encontramos um fator i.
                        Por exemplo, se i � um fator de number, ent�o number / i � o outro fator.
*/
