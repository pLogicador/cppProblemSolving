/*
Programa: EX6.33
  Autor: Pedro Miranda
  Data: 06/06/2023
  Descri��o: Escrevi uma fun��o que calcula o m�ximo divisor comum (MDC) de dois inteiros e
                retorna o resultado para a fun��o principal, que o chama.

*/


#include <iostream>
using namespace std;


// Linha de prototipa��o de fun��es
int qualityPoints( int );



int main()
{
    // Linha de declara��o de vari�veis
    int average;




    // Solicitando que o usu�rio insira a m�dia do aluno.
    cout << "Insira a media do aluno: ";
    cin >> average;

    // Passando a m�dia inserida para a fun��o chamada
    int points = qualityPoints( average );

    // Imprimimos o valor dos pontos de qualidade
    cout << "Pontos de qualidade: " << points << endl;


    return 0;
}




int qualityPoints( int average )
{
    if( average >= 90 && average <= 100 )
    {
        return 4;
    } else if ( average >= 80 && average < 90 )
    {
        return 3;
    } else if ( average >= 70 && average < 80 )
    {
        return 2;
    } else if ( average >= 60 && average < 70 )
    {
        return 1;
    } else
    {
        return 0;
    }

};

/*
    1. A fun��o qualityPoints recebe a m�dia de um aluno como par�metro, representada pela vari�vel average.

    2. Utilizamos uma estrutura condicional if-else if-else para verificar a faixa de m�dia em que o aluno se enquadra.

    3. Se a m�dia estiver entre 90 e 100 (inclusive), retornamos 4.
    4. Se ela estiver entre 80 e 89 (inclusive), retornamos 3.
    5. Se ela estiver entre 70 e 79 (inclusive), retornamos 2.
    6. Se ela estiver entre 60 e 69 (inclusive), retornamos 1.
    7. Caso ela seja menor que 60, retornamos 0.


*/




