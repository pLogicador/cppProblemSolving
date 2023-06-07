/*
Programa: EX6.25
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descri��o: Este programa
    a) Calcula a parte inteira do quociente quando o inteiro a � dividido pelo inteiro b.
    b) Calcule o resto inteiro quando o inteiro a � dividido pelo inteiro b.
    c) Utiliza as partes do programa desenvolvido em (a) e (b) para escrever uma fun��o que
        insere um inteiro entre 1 e 32767 e o imprime como uma s�rie de d�gitos, do qual cada
        par � separado por dois espa�os
*/


#include <iostream>
using namespace std;

// Linha de prototipa��o de fun��es
void quotient( int, int );
void integerRemainder( int, int );
void printDigits( int );

int main()
{
    // Declara��o e inicializa��o dasvari�veis dd(dividendo) e ds(divisor)
    int dd = 10;
    int ds = 5;
    int numero = 5678;



    // testando as fun��es na ordem das letras a, b, c;
    quotient( dd, ds );         // a)
    cout << endl;

    integerRemainder( dd, ds ); // b)
    cout << endl;

    printDigits( numero );      // c)
    cout << endl;


    return 0;
}


// a)
void quotient( int a, int b )
{
    // calcula a parte inteira do quociente
    int result = a / b;


    cout << "Parte inteira do quociente: " << result << endl;
};

// b )
void integerRemainder( int a, int b )
{
    // calcula o resto inteiro
    int result = a % b;

    cout << "Resto inteiro da divis�o: " << result << endl;
};


// c)
void printDigits( int n )
{
    char digit;

    // Verifica se o n�mero � menor que 10.
    if ( n < 10 )
    {
        /* Se for, ent�o ele � um d�gito �nico e imprimimos o n�mero diretamente
            e logo em seguida, retornamos da fun��o.*/
        cout << n << "  ";
        return;
    }
    /* Se o n�mero for maior ou igual a 10, a fun��o chama recursivamente printDigits passando o n�mero dividido por 10.*/
    printDigits( n / 10 );  // Faz mover a recurs�o para o pr�ximo d�gito.


    cout << n % 10 << "  ";   /* obt�m o �ltimo d�gito do n�mero original e
                                    imprimimos o �ltimo d�gito seguido por dois espa�os.*/

};


