// Figura 5.1: fig05_01.cpp
// Repeti��o controlada por contador.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int counter = 0; // declara e inicializa a vari�vel de controle

    while ( ++counter <= 10 ) // incremento feito diretamente pela condi��o de loop
    {
        cout << counter << " ";

    }

    cout << endl; // gera a sa�da de um caractere de nova linha
    return 0;
}




/*
// ou no modo condensado

int main()
{
    int counter = 1; // declara e inicializa a vari�vel de controle

    while ( counter <= 10 ) // condi��o de continua��o do loop
    {
        cout << counter << " ";
        //counter++; // incrementa a vari�vel de controle por 1
    } // fim do while

    cout << endl; // gera a sa�da de um caractere de nova linha
    return 0;
}



// Repeti��o controlada por contador com a instru��o for.

int main()
{
    // cabe�alho da instru��o for inclui inicializa��o,
    // condi��o de continua��o do loop e incremento.
    for ( int counter = 1; counter <= 10; counter++ )
        cout << counter << � �;

    cout << endl; // gera a sa�da de um caractere de nova linha
    return 0;
}
