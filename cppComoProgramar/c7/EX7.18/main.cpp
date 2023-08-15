/*
    7.18 O que o seguinte programa faz?

    A função whatIsThis implementa um algoritmo recursivo para calcular a soma dos elementos do array.
    Ela recebe um array b e o tamanho do array size como parâmetros. O algoritmo funciona da
    seguinte maneira:

    Se o tamanho do array for igual a 1 (caso base), ou seja, se o array tiver apenas um elemento, o
    valor desse elemento é retornado. Caso contrário (passo recursivo), a função retorna a soma do
    último elemento do array (b[size-1]) com a chamada recursiva da função whatIsThis, passando o
    array b e o tamanho reduzido em 1 (size - 1).

    Dessa forma, a função whatIsThis percorre o array recursivamente, somando cada elemento até
    alcançar o caso base, onde apenas um elemento é restante. Em seguida, as chamadas
    recursivas retornam os resultados e as somas são feitas ao retornar na pilha de
    chamadas.

    Portanto, o programa calcula a soma de todos os elementos do array a e exibe o resultado. Neste caso específico,
    o resultado será a soma dos números de 1 a 10, que é igual a 55.

*/

#include <iostream>
using namespace std;

int whatIsThis(int[], int); // Protótipo da função

int main()
{
    const int arraySize = 10;
    int a[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int result = whatIsThis(a, arraySize);

    cout << "Result is " << result << endl;
    return 0;
}

int whatIsThis(int b[], int size)
{
    if (size == 1) // Caso base
        return b[0];
    else // Passo recursivo
        return b[size - 1] + whatIsThis(b, size - 1);
}
