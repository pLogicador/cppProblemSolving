/*
Para cada um dos seguintes conjuntos de inteiros, escreva uma única instrução que aleatoriamente imprime um número do conjunto.
a) 2, 4, 6, 8, 10.
b) 3, 5, 7, 9, 11.
c) 6, 10, 14, 18, 22

*/
#include <iostream>
using namespace std;

int main()
{
    // a
    cout << "a) ";
    for (int i = 2; i < 12; i+=2)
    {
        cout << i << " ";
    }
    cout << endl;

    // b
    cout << "b) ";
    for (int i = 3; i < 13; i+=2)
    {
        cout << i << " ";
    }
    cout << endl;

    // c
    cout << "c) ";
    for (int i = 6; i < 26; i+=4)
    {
        cout << i << " ";
    }
    cout << endl;


    return 0;
}
