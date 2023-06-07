/*
Programa: EX6.28
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descri��o: Escrevi um programa que insere tr�s n�meros de ponto flutuante com dupla precis�o e
  os passa para uma fun��o que retorna o menor n�mero.
*/



#include <iostream>
#include <iomanip>
using namespace std;

// Linha de prototipa��o de fun��es
double findSmallerNumber( double, double, double );


int main()
{
    // Declara��o de vari�veis
    double number1, number2, number3;
    double smaller;




    // Pede ao usu�rio 3 n�meros de ponto flutuante e os l�
    cout << "Insira tres numeros de ponto flutuante: ";
    cin >> number1 >> number2 >> number3;

    // Guarda a fun��o findSmallerNumber em smaller
    smaller = findSmallerNumber( number1, number2, number3 );

    // Mostra na tela o menor n�mero lido com dupla precis�o
    cout << fixed << setprecision(2);
    cout << "O menor numero eh: " << smaller << endl;

    return 0;
}





// Recebe tr�s n�meros como argumentos e retorna o menor n�mero entre eles
double findSmallerNumber( double n1, double n2, double n3 )
{
    double smallerN = n1; // inicializa a vari�vel de refer�ncia com o n1


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


