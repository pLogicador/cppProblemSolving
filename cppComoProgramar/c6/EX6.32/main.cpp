/*
Programa: EX6.32
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descri��o: Escrevi uma fun��o mdc que retorna o m�ximo divisor comum de dois inteiros.
*/

#include <iostream>
using namespace std;


// Linha de prototipa��o de fun��es
int mdc( int, int);


int main()
{
    // Linha de declara��o de vari�veis
    int n1, n2;




    // Solicitando ao usu�rio que digite dois n�meros inteiros
    cout << "Insira dois numeros inteiros: ";
    cin >> n1 >> n2;

    // Passando os n�meros digitados pelo usu�rio na fun��o mdc chamada
    int result = mdc( n1, n2 );

    // Imprimindo o m�ximo divisor comum entre os dois n�meros
    cout << "O MDC de " << n1 << " e " << n2 << " eh: " << result << endl;



    return 0;
}


int mdc( int a, int b )
{
    // Certifica-se de que 'a' seja sempre o maior n�mero
    if( b > a )
    {
        swap( a, b );
    }

    while( b != 0 )
    {
        int rest = a % b;
        a = b;
        b = rest;
    }
    return a;

};




/*
    EXPLICA��O DO ALGORITMO
    1. A fun��o mdc recebe dois n�meros inteiros a e b como par�metros.

    2. Para garantir que a seja sempre o maior n�mero, utilizamos a fun��o std::swap(a, b) para trocar os valores caso
        b seja maior que a.

    3. Em seguida, entramos em um loop enquanto b n�o for igual a zero:
        * Calculamos o resto da divis�o de a por b usando o operador m�dulo e armazenamos o resultado na vari�vel resto.
        * Atribu�mos o valor de 'b' a 'a' e o valor de resto a 'b'. Isso � feito para atualizar os valores das vari�veis para a
            pr�xima itera��o do loop.

    4. Quando o valor de b se torna zero, significa que 'a' � o m�ximo divisor comum entre os dois n�meros.
        Portanto, retornamos o valor de a.

*/




