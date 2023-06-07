/*
Programa: EX6.32
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descrição: Escrevi uma função mdc que retorna o máximo divisor comum de dois inteiros.
*/

#include <iostream>
using namespace std;


// Linha de prototipação de funções
int mdc( int, int);


int main()
{
    // Linha de declaração de variáveis
    int n1, n2;




    // Solicitando ao usuário que digite dois números inteiros
    cout << "Insira dois numeros inteiros: ";
    cin >> n1 >> n2;

    // Passando os números digitados pelo usuário na função mdc chamada
    int result = mdc( n1, n2 );

    // Imprimindo o máximo divisor comum entre os dois números
    cout << "O MDC de " << n1 << " e " << n2 << " eh: " << result << endl;



    return 0;
}


int mdc( int a, int b )
{
    // Certifica-se de que 'a' seja sempre o maior número
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
    EXPLICAÇÃO DO ALGORITMO
    1. A função mdc recebe dois números inteiros a e b como parâmetros.

    2. Para garantir que a seja sempre o maior número, utilizamos a função std::swap(a, b) para trocar os valores caso
        b seja maior que a.

    3. Em seguida, entramos em um loop enquanto b não for igual a zero:
        * Calculamos o resto da divisão de a por b usando o operador módulo e armazenamos o resultado na variável resto.
        * Atribuímos o valor de 'b' a 'a' e o valor de resto a 'b'. Isso é feito para atualizar os valores das variáveis para a
            próxima iteração do loop.

    4. Quando o valor de b se torna zero, significa que 'a' é o máximo divisor comum entre os dois números.
        Portanto, retornamos o valor de a.

*/




