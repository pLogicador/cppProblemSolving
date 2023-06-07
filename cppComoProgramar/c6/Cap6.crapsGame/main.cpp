#include <iostream>
#include <cstdlib> // contém protótipos para funções srand e rand
using std::rand;
using std::srand;
#include <ctime>  // contém protótipo para a função time
using std::time;

using namespace std;



int rollDice(); // lança o dado, calcula e exibe a soma


int main()
{
    // enumeração com constantes que representam o status do jogo
    enum Status {CONTINUE, WON, LOST}; // todas as maiúsculas em constantes


    int myPoint;
    Status gameStatus;  // pode conter CONTINUE, WON ou LOST

    // torna aleatório o gerador de número aleatório utilizando a hora atual
    srand( time(0) );


    int sumOfDice = rollDice();

    switch ( sumOfDice )
    {
    case 7: // ganha com 7 no primeiro lançamento
    case 11: // ganha com 11 no primeiro lançamento
        gameStatus = WON;
        break;
    case 2: // perde com 2 no primeiro lançamento
    case 3: // perde com 3 no primeiro lançamento
    case 12: // perde com 12 no primeiro lançamento
        gameStatus = LOST;
        break;
    default: // não ganhou nem perdeu, portanto registra a pontuação
        gameStatus = CONTINUE; // jogo não terminou
        myPoint = sumOfDice; // informa a pontuação
        cout << "Point is " << myPoint << endl;
        break;
    }

    // enquanto o jogo não estiver completo
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
    // seleciona valores aleatórios do dado
    int die1 = 1 + rand() % 6; // primeiro lançamento do dado
    int die2 = 1 + rand() % 6; // segundo lançamento do dado

    int sum = die1 + die2; // calcula a soma de valores do dado

    // exibe os resultados desse lançamento
    cout << "Player rolled " << die1 << " + " << die2
        << " = " << sum << endl;
    return sum;
}
