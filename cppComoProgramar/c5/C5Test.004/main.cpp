// iNSTRU��ES break e continue


#include <iostream>
using std::cout;
using std::cin;
using std::endl;
// Instru��o break sai de uma instru��o for
int main()
{
    int count;  // vari�vel de controle tamb�m utilizada depois que loop termina

    for ( count = 1; count <= 10; count++ ) // itera 10 vezes
    {
        if ( count == 5 )
            break; // quebra o loop somente se x for 5

        cout << count << " ";
    }
    cout << "\nBroke out of loop at count = " << count << endl;

    return 0;
}


/*
// continua instru��o que termina uma itera��o de uma instru��o for.
int main()
{
    for ( int count = 1; count <= 10; count++ ) // itera 10 vezes
    {
        if ( count == 5 ) // se count for 5,
            continue; // pula o c�digo restante no loop

        cout << count << � �;
    } // fim do for

    cout << �\nUsed continue to skip printing 5� << endl;
    return 0; // indica termina��o bem-sucedida
}










