/*
Programa: EX6.31
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descrição: Escrevi uma função que aceita um valor inteiro e retorna o número com seus dígitos invertidos.
  Por exemplo, dado o número 7631, a função deve retornar 1367.
*/



#include <iostream>
using namespace std;

// Linha de prototipação de funções
int reverseDigits( int );



int main()
{
    // Linha de declaração de variáveis
    int number;




    // Solicita ao usuário um número inteiro e logo em seguida o lê
    cout << "Digite um numero inteiro: ";
    cin >> number;

    // Adiciona o número lido para a função chamada
    int reversedNumber = reverseDigits( number );

    // Escreve na tela o número em ordem inversa
    cout << "Numero com digitos invertidos: " << reversedNumber << endl;



    return 0;
}




int reverseDigits( int n )
{
    int reversedN = 0;



    while( n != 0 )
    {
        int digit = n % 10;                     // Extraí o último dígito do número
        reversedN = reversedN * 10 + digit;     // Vai adicionando o último dígito, a cada iteração, na ordem de extração
        n /= 10;                                // Vai removendo o último dígito do número original até 0

    }
    return reversedN;

};



/*
    EXPLICAÇÃO DO ALGORITMO

    1. A função reverseDigits recebe um número inteiro 'n' como parâmetro.
    2. Inicializamos a variável reversedN como zero, que será usada para construir o número invertido.
    3. Em um loop, enquanto o 'n' for diferente de zero, executamos as seguintes etapas:

        3.1. Dentro do loop, a linha int digit = n % 10; calcula o resto da divisão do number por 10.
                Isso nos dá o último dígito do número original.

        3.2. Em seguida, a linha reversedN = reversedN * 10 + digit; constrói o número invertido.
                Na primeira iteração, o reversedN é multiplicado por 10 para dar espaço ao próximo dígito invertido e,
                em seguida, o digit é adicionado.

        3.3. A linha number /= 10; remove o último dígito do número original dividindo-o por 10.
                Isso é feito para que possamos obter o próximo dígito na próxima iteração do loop.

        3.4. O loop continua executando essas etapas até que number se torne zero,
                o que significa que todos os dígitos do número original foram processados.

        3.5. No final do loop, o reversedN conterá o número original com seus dígitos invertidos.

*/

