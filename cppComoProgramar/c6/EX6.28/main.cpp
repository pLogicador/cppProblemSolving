/*
Programa: EX6.28
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descrição: Escrevi um programa que insere três números de ponto flutuante com dupla precisão e
  os passa para uma função que retorna o menor número.
*/



#include <iostream>
#include <iomanip>
using namespace std;

// Linha de prototipação de funções
double findSmallerNumber( double, double, double );


int main()
{
    // Declaração de variáveis
    double number1, number2, number3;
    double smaller;




    // Pede ao usuário 3 números de ponto flutuante e os lê
    cout << "Insira tres numeros de ponto flutuante: ";
    cin >> number1 >> number2 >> number3;

    // Guarda a função findSmallerNumber em smaller
    smaller = findSmallerNumber( number1, number2, number3 );

    // Mostra na tela o menor número lido com dupla precisão
    cout << fixed << setprecision(2);
    cout << "O menor numero eh: " << smaller << endl;

    return 0;
}





// Recebe três números como argumentos e retorna o menor número entre eles
double findSmallerNumber( double n1, double n2, double n3 )
{
    double smallerN = n1; // inicializa a variável de referência com o n1


    if ( n2 < smallerN )
    {
        smallerN = n2;
    }
    if ( n3 < smallerN )
    {
        smallerN = n3;
    }

    return smallerN;    // retorna o menor valor

};


