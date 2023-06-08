/*
Programa: EX6.38 (Exerc�cio 6.38, 6.39)
  Autor: Pedro Miranda
  Data: 07/06/2023
  Descri��o: Escrevi um programa que  pede ao usu�rio para adivinhar o n�mero que � gerad aleat�riamente entre 1 e 100,
                permitindo que o jogador fa�a suposi��es e fornece feedback sobre se a suposi��o � muito alta ou muito baixa.
                O jogo continua at� que o jogador adivinhe corretamente ou fa�a 10 tentativas. Ap�s o jogo,
                o programa mostra uma mensagem baseada no desempenho do jogador. O jogador pode optar por
                jogar novamente ou sair do jogo


                COMO FUNCIONA?
                1.  O programa come�a incluindo as bibliotecas necess�rias, declarando as vari�veis e inicializando a semente do
                    gerador de n�meros aleat�rios.

                2.  Em seguida, entra em um loop principal que permite que o jogador jogue v�rias vezes.
                    O loop continuar� enquanto o jogador quiser jogar novamente.

                3.  Dentro do loop principal, o programa gera um n�mero aleat�rio chamado "n�mero secreto" no intervalo de 1 a 100.

                4.  O programa ent�o solicita ao jogador para fazer uma suposi��o sobre qual � o n�mero secreto.
                    O jogador insere a suposi��o.

                5.  O programa verifica se a suposi��o do jogador est� correta. Se for igual ao n�mero secreto,
                    imprime uma mensagem parabenizando o jogador e exibe o n�mero de tentativas que levou para acertar.
                    Caso contr�rio, o programa informa ao jogador se a suposi��o � muito alta ou muito baixa.

                6.  O programa repete o passo 4 e 5 at� que o jogador adivinhe corretamente o n�mero ou at� que tenha feito
                    10 tentativas.

                7.  Ap�s sair do loop de adivinha��o, o programa verifica o n�mero de tentativas feitas pelo jogador.
                    Se o jogador adivinhar o n�mero em 10 tentativas ou menos, imprime uma mensagem de sorte ou habilidade.
                    Caso contr�rio, exibe uma mensagem incentivando o jogador a melhorar seu desempenho.

                8.  O programa pergunta ao jogador se deseja jogar novamente. Se o jogador digitar 's' ou 'S',
                    o loop principal continua e o jogo recome�a. Caso contr�rio, o programa termina.


*/


/* Ao usar a fun��o time(0) como argumento para srand(), garantimos que a sequ�ncia de n�meros aleat�rios gerados por rand() ser�
diferente em cada execu��o do programa.*/

#include <iostream>
#include <cstdlib>  // rand() e srand() que s�o usadas para gerar n�meros aleat�rios
#include <ctime>    // time(0) para obter o n�mero de segundos desde 1� de janeiro de 1970.
using namespace std;



int main()
{
    // Inicializando a semente do gerador de n�meros aleat�rios
    srand(time(0));

    char playAgain = 's';

    while ( playAgain == 's' || playAgain == 'S' )
    {
        int secretNumber = rand() % 100 + 1;       // Gerando um n�mero aleat�rio no intervalo de 1 a 1000
        int attempts;
        int countAttempts = 0;                      // Inicializa o contador de tentativas



        cout << "\nTenho um numero entre 1 e 1000." << endl;
        cout << "Consegue adivinha-lo? " << endl;


        do
        {
            cout << "Insira sua suposicao: ";
            cin >> attempts;

            countAttempts++;                        // Incrementando o contador de tentativas

            if( attempts == secretNumber )
            {
                cout << "\nIncrivel! Voce adivinhou o numero " << secretNumber << " em " << countAttempts << " tentativas" << endl;

            } else if ( attempts < secretNumber ){
                cout << "\nMuito baixo. Tente novamente." << endl;
            } else {
                cout << "\nMuito alto. Tente novamente." << endl;
            }


            if ( countAttempts == 10 )
            {
                break; // Sai do loop se o jogador fez 10 tentativas
            }

        } while( attempts != secretNumber );


        if ( countAttempts <= 10 )
        {
            cout << "Voce sabe o segredo ou teve sorte!" << endl;
        } else {
            cout << "Voce deveria ser capaz de fazer melhor!" << endl;
        }

        cout << "Deseja jogar novamente (s/n)? ";
        cin >> playAgain;

    }

    return 0;
}
