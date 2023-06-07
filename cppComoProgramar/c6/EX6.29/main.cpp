/*

Programa: EX6.29
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descrição: Escrevi uma função 'perfect' que determina se o parâmetro number é um número perfeito.
                Essa função é chamada em um programa que determina e imprime todos os números perfeitos entre 1 e 1.000.
                Ele imprime os fatores de cada número perfeito para confirmar se o número é de fato perfeito.

*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;



// Linha de prototipação de funções
bool isPerfect( int number );
void printFactors( int number );




int main()
{
    // Linha de declaração de variáveis
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
        /* Se o número for divisível por i, isso significa que i é um fator.
            Então adicionamos i à soma*/
        if ( number%i == 0)
        {
            sum += i;

            /* Se i não for igual a number / i, também adicionamos number / i à soma.*/
            if ( i != number/i )
            {
                sum += number/i;
            }
        }
    }
    /*  Após o loop, verificamos se a soma é igual ao número. Se for, retornamos true,
        indicando que o número é perfeito. Caso contrário, retornamos false.*/
    return sum == number;

};





/*  Imprimimos os fatores de um número perfeito. Iteramos de 1 até o número (exclusivo) e,
    se o número for divisível por i, imprimimos i.
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
        OBS PARA A FUNÇÃO isPerfect:

        1. number % i:  Essa expressão retorna o resto da divisão de number por i.
                        Se o resto for igual a zero, isso significa que i é um fator de number,
                         pois number é divisível por i sem deixar resto.

        2. number / i:  Essa expressão realiza a divisão inteira de number por i.
                        O resultado é o quociente da divisão. Essa operação é
                        utilizada para encontrar o outro fator correspondente quando encontramos um fator i.
                        Por exemplo, se i é um fator de number, então number / i é o outro fator.
*/
