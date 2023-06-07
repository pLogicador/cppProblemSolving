/*

Escreva instruções que atribuem inteiros aleatórios à variável n nos seguintes intervalos:
a) 1 ≤ n ≤ 2
b) 1 ≤ n ≤ 100
c) 0 ≤ n ≤ 9
d) 1.000 ≤ n ≤ 1.112
e) –1≤ n ≤ 1
f) –3 ≤ n ≤ 11

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    // a)
    n = 1 + rand() %2;
    cout << n << endl;

    // b)
    n = 1 + rand() % 100;
    cout << n << endl;

    // c)
    n = rand() % 11;
    cout << n << endl;

    // d)
    n = 1000 + rand() % 115;
    cout << n << endl;

    // e)
    n = -1 + rand() % 4;
    cout << n << endl;

    // f)
    n = -3 + rand() % 16;
    cout << n << endl;


    return 0;
}

