#include <iostream>
using namespace std;

int main()
{
    int t[2][3];
    /*
        b) O array t tem 2 linhas.

        c) O array t tem 3 colunas.

        d) O array t tem um total de 2 x 3 = 6 elementos.

        e) Nomes de todos os elementos na linha 1 de t: t[1][0], t[1][1], t[1][2].

        f) Nomes de todos os elementos na coluna 2 de t: t[0][2], t[1][2].
    */

    // g) Instrução que configura o elemento de t na linha 1 e na coluna 2 como zero:
    t[1][2] = 0;


    // h) Escreva uma série de instruções que inicializam cada elemento de t como zero. Não utilize um loop.
    t[0][0] = 0;
    t[0][1] = 0;
    t[0][2] = 0;

    t[1][0] = 0;
    t[1][1] = 0;
    t[1][2] = 0;



    // i) Escreva uma instrução for aninhada que inicializa cada elemento de t como zero.
    for( int i = 0; i < 2; i++ )
    {
        for( int j = 0; j < 3; j ++ )
        {
            t[i][j] = 0;
        }
    }
/*
    // j) Escreva uma instrução que insere os valores para os elementos de t a partir do terminal.
    cout << "Insira os elementos para t:"

    for( int i = 0; i < 2; i++ )
    {
        for( int j = 0; j < 3; j ++ )
        {
            cin >> t[i][j];
        }
    }
*/
    // k) Escreva uma série de instruções que determinam e imprimem o menor valor no array t.

    int menor = t[0][0];

    for( int i = 0; i < 2; i++ )
    {
        for( int j; j < 3; j++ )
        {
            if( t[i][j] < menor )
            {
                menor = t[i][j];
            }
        }
    }

    cout << "\n\nO menor valor encontrado em t: " << menor << endl;


    // l) Instrução que exibe os elementos na linha 0 de t:
    cout << "\n\nElementos na linha 0 de t: ";
    for( int j = 0; j < 3; j++ )
    {
        cout << t[0][j] << " ";
    }


    // m) Escreva uma instrução que soma os elementos na coluna 3 de t.
    int soma = 0;

    for( int i = 0; i < 2; i++ )
    {
        soma += t[i][2];
    }
    cout << "\n\nSoma dos elementos na coluna 2 de t: " << soma << "\n\n" << endl;



    /* n)   Escreva uma série de instruções que imprime o array t no formato tabular.
            Liste os subscritos de coluna como títulos ao longo do topo da tabela e
            liste os subscritos de linha à esquerda de cada linha.
    */
    for( int i = 0; i < 2; i++ )
    {
        for( int j = 0; j < 3; j++ )
        {
            cout << t[i][j] << "\t";
        }
        cout << endl;
    }


    return 0;
}
