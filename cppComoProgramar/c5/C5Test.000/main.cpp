// Figura 5.1: fig05_01.cpp
// Repetição controlada por contador.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int counter = 0; // declara e inicializa a variável de controle

    while ( ++counter <= 10 ) // incremento feito diretamente pela condição de loop
    {
        cout << counter << " ";

    }

    cout << endl; // gera a saída de um caractere de nova linha
    return 0;
}




/*
// ou no modo condensado

int main()
{
    int counter = 1; // declara e inicializa a variável de controle

    while ( counter <= 10 ) // condição de continuação do loop
    {
        cout << counter << " ";
        //counter++; // incrementa a variável de controle por 1
    } // fim do while

    cout << endl; // gera a saída de um caractere de nova linha
    return 0;
}



// Repetição controlada por contador com a instrução for.

int main()
{
    // cabeçalho da instrução for inclui inicialização,
    // condição de continuação do loop e incremento.
    for ( int counter = 1; counter <= 10; counter++ )
        cout << counter << “ “;

    cout << endl; // gera a saída de um caractere de nova linha
    return 0;
}
