/*
Programa: EX6.25
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descrição: Este programa
    a) Calcula a parte inteira do quociente quando o inteiro a é dividido pelo inteiro b.
    b) Calcule o resto inteiro quando o inteiro a é dividido pelo inteiro b.
    c) Utiliza as partes do programa desenvolvido em (a) e (b) para escrever uma função que
        insere um inteiro entre 1 e 32767 e o imprime como uma série de dígitos, do qual cada
        par é separado por dois espaços
*/


#include <iostream>
using namespace std;

// Linha de prototipação de funções
void quotient( int, int );
void integerRemainder( int, int );
void printDigits( int );

int main()
{
    // Declaração e inicialização dasvariáveis dd(dividendo) e ds(divisor)
    int dd = 10;
    int ds = 5;
    int numero = 5678;



    // testando as funções na ordem das letras a, b, c;
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

    cout << "Resto inteiro da divisão: " << result << endl;
};


// c)
void printDigits( int n )
{
    char digit;

    // Verifica se o número é menor que 10.
    if ( n < 10 )
    {
        /* Se for, então ele é um dígito único e imprimimos o número diretamente
            e logo em seguida, retornamos da função.*/
        cout << n << "  ";
        return;
    }
    /* Se o número for maior ou igual a 10, a função chama recursivamente printDigits passando o número dividido por 10.*/
    printDigits( n / 10 );  // Faz mover a recursão para o próximo dígito.


    cout << n % 10 << "  ";   /* obtém o último dígito do número original e
                                    imprimimos o último dígito seguido por dois espaços.*/

};


