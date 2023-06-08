/*
Programa: EX6.38 (Exercício 6.38, 6.39)
  Autor: Pedro Miranda
  Data: 07/06/2023
  Descrição: Escrevi um programa que  pede ao usuário para adivinhar o número que é gerad aleatóriamente entre 1 e 100,
                permitindo que o jogador faça suposições e fornece feedback sobre se a suposição é muito alta ou muito baixa.
                O jogo continua até que o jogador adivinhe corretamente ou faça 10 tentativas. Após o jogo,
                o programa mostra uma mensagem baseada no desempenho do jogador. O jogador pode optar por
                jogar novamente ou sair do jogo


                COMO FUNCIONA?
                1.  O programa começa incluindo as bibliotecas necessárias, declarando as variáveis e inicializando a semente do
                    gerador de números aleatórios.

                2.  Em seguida, entra em um loop principal que permite que o jogador jogue várias vezes.
                    O loop continuará enquanto o jogador quiser jogar novamente.

                3.  Dentro do loop principal, o programa gera um número aleatório chamado "número secreto" no intervalo de 1 a 100.

                4.  O programa então solicita ao jogador para fazer uma suposição sobre qual é o número secreto.
                    O jogador insere a suposição.

                5.  O programa verifica se a suposição do jogador está correta. Se for igual ao número secreto,
                    imprime uma mensagem parabenizando o jogador e exibe o número de tentativas que levou para acertar.
                    Caso contrário, o programa informa ao jogador se a suposição é muito alta ou muito baixa.

                6.  O programa repete o passo 4 e 5 até que o jogador adivinhe corretamente o número ou até que tenha feito
                    10 tentativas.

                7.  Após sair do loop de adivinhação, o programa verifica o número de tentativas feitas pelo jogador.
                    Se o jogador adivinhar o número em 10 tentativas ou menos, imprime uma mensagem de sorte ou habilidade.
                    Caso contrário, exibe uma mensagem incentivando o jogador a melhorar seu desempenho.

                8.  O programa pergunta ao jogador se deseja jogar novamente. Se o jogador digitar 's' ou 'S',
                    o loop principal continua e o jogo recomeça. Caso contrário, o programa termina.


*/


/* Ao usar a função time(0) como argumento para srand(), garantimos que a sequência de números aleatórios gerados por rand() será
diferente em cada execução do programa.*/

#include <iostream>
#include <cstdlib>  // rand() e srand() que são usadas para gerar números aleatórios
#include <ctime>    // time(0) para obter o número de segundos desde 1º de janeiro de 1970.
using namespace std;



int main()
{
    // Inicializando a semente do gerador de números aleatórios
    srand(time(0));

    char playAgain = 's';

    while ( playAgain == 's' || playAgain == 'S' )
    {
        int secretNumber = rand() % 100 + 1;       // Gerando um número aleatório no intervalo de 1 a 1000
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
