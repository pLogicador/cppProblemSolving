#include <iostream>
#include <cstdlib> // cont�m prot�tipos para fun��es srand e rand
using std::rand;
using std::srand;
#include <ctime>  // cont�m prot�tipo para a fun��o time
using std::time;

using namespace std;



int rollDice(); // lan�a o dado, calcula e exibe a soma


int main()
{
    // enumera��o com constantes que representam o status do jogo
    enum Status {CONTINUE, WON, LOST}; // todas as mai�sculas em constantes


    int myPoint;
    Status gameStatus;  // pode conter CONTINUE, WON ou LOST

    // torna aleat�rio o gerador de n�mero aleat�rio utilizando a hora atual
    srand( time(0) );


    int sumOfDice = rollDice();

    switch ( sumOfDice )
    {
    case 7: // ganha com 7 no primeiro lan�amento
    case 11: // ganha com 11 no primeiro lan�amento
        gameStatus = WON;
        break;
    case 2: // perde com 2 no primeiro lan�amento
    case 3: // perde com 3 no primeiro lan�amento
    case 12: // perde com 12 no primeiro lan�amento
        gameStatus = LOST;
        break;
    default: // n�o ganhou nem perdeu, portanto registra a pontua��o
        gameStatus = CONTINUE; // jogo n�o terminou
        myPoint = sumOfDice; // informa a pontua��o
        cout << "Point is " << myPoint << endl;
        break;
    }

    // enquanto o jogo n�o estiver completo
    while (gameStatus == CONTINUE)
    {
        sumOfDice = rollDice();


        if (sumOfDice == myPoint)
            gameStatus = WON;
        else
            if (sumOfDice == 7)
                gameStatus = LOST;
    }

    if (gameStatus == WON)
        cout << "Player wins" << endl;
    else
        cout << "Player loses" << endl;

    return 0;
}


int rollDice()
{
    // seleciona valores aleat�rios do dado
    int die1 = 1 + rand() % 6; // primeiro lan�amento do dado
    int die2 = 1 + rand() % 6; // segundo lan�amento do dado

    int sum = die1 + die2; // calcula a soma de valores do dado

    // exibe os resultados desse lan�amento
    cout << "Player rolled " << die1 << " + " << die2
        << " = " << sum << endl;
    return sum;
}
