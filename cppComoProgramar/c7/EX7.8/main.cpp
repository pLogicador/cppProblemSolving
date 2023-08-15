#include <iostream>
using namespace std;

int main()
{
    // a) Exiba o valor do elemento 6 do array de caracteres f:
    string f[10] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    cout << "valor do elemento 6: " << f[5] << endl;


    cout << "\n\n" << endl;

    // b) Insira um valor no elemento 4 do array unidimensional de ponto flutuante b:
    float b[10] = { 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 1.10 };
    b[3] = 5.5;

    cout << b[3] << endl;



    cout << "\n\n" << endl;


    // c) Inicialize cada um dos 5 elementos do array de inteiros unidimensional g como 8:
    int g[5];

    for( int i = 0; i < 5; i++ )
    {
        g[i] = 8;
        cout << g[i];
    }



    cout << "\n\n" << endl;



    // d) Some e imprima os elementos do array de ponto flutuante c de 100 elementos:
    float c[100];

    float sum = 0.0;


    for( int i = 0; i < 100; i++ )
    {
        sum += c[i];
    }
    cout << "Soma dos elementos: " << sum << endl;



    cout << "\n\n" << endl;


/*
    // e) Copie o array a para a primeira parte do array b. Considere double a[11], b[34]:
    double a[11];
    double b[34];


    for( int i = 0; i < 11; i++ )
    {
        b[i] = a[i];
    }



    cout << "\n\n" << endl;
*/


    // f) Determine e imprima os maiores e menores valores contidos no array de ponto flutuante w de 9 elementos.
    float w[9];

    float maior = w[0];
    float menor = w[0];


    for( int i = 0; i < 9; i++ )
    {
        if( w[i] > maior )
        {
            maior = w[i];
        }
        if( w[i] < menor )
        {
            menor = w[i];
        }
    }
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;




    return 0;
}
