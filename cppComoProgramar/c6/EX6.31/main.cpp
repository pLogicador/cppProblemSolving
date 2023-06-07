/*
Programa: EX6.31
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descri��o: Escrevi uma fun��o que aceita um valor inteiro e retorna o n�mero com seus d�gitos invertidos.
  Por exemplo, dado o n�mero 7631, a fun��o deve retornar 1367.
*/



#include <iostream>
using namespace std;

// Linha de prototipa��o de fun��es
int reverseDigits( int );



int main()
{
    // Linha de declara��o de vari�veis
    int number;




    // Solicita ao usu�rio um n�mero inteiro e logo em seguida o l�
    cout << "Digite um numero inteiro: ";
    cin >> number;

    // Adiciona o n�mero lido para a fun��o chamada
    int reversedNumber = reverseDigits( number );

    // Escreve na tela o n�mero em ordem inversa
    cout << "Numero com digitos invertidos: " << reversedNumber << endl;



    return 0;
}




int reverseDigits( int n )
{
    int reversedN = 0;



    while( n != 0 )
    {
        int digit = n % 10;                     // Extra� o �ltimo d�gito do n�mero
        reversedN = reversedN * 10 + digit;     // Vai adicionando o �ltimo d�gito, a cada itera��o, na ordem de extra��o
        n /= 10;                                // Vai removendo o �ltimo d�gito do n�mero original at� 0

    }
    return reversedN;

};



/*
    EXPLICA��O DO ALGORITMO

    1. A fun��o reverseDigits recebe um n�mero inteiro 'n' como par�metro.
    2. Inicializamos a vari�vel reversedN como zero, que ser� usada para construir o n�mero invertido.
    3. Em um loop, enquanto o 'n' for diferente de zero, executamos as seguintes etapas:

        3.1. Dentro do loop, a linha int digit = n % 10; calcula o resto da divis�o do number por 10.
                Isso nos d� o �ltimo d�gito do n�mero original.

        3.2. Em seguida, a linha reversedN = reversedN * 10 + digit; constr�i o n�mero invertido.
                Na primeira itera��o, o reversedN � multiplicado por 10 para dar espa�o ao pr�ximo d�gito invertido e,
                em seguida, o digit � adicionado.

        3.3. A linha number /= 10; remove o �ltimo d�gito do n�mero original dividindo-o por 10.
                Isso � feito para que possamos obter o pr�ximo d�gito na pr�xima itera��o do loop.

        3.4. O loop continua executando essas etapas at� que number se torne zero,
                o que significa que todos os d�gitos do n�mero original foram processados.

        3.5. No final do loop, o reversedN conter� o n�mero original com seus d�gitos invertidos.

*/

