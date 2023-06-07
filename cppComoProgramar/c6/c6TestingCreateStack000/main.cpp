#include <iostream>
#include "pilha.h"
using namespace std;

int main()
{
    Pilha p;


    p.empilhar(10);
    p.empilhar(11);
    p.empilhar(12);
    p.desempilhar();    // desempilha elemento 12

    cout << "Pilha Vazia: " << p.vazia() << endl;
    cout << "Topo: " << p.getTopo() << endl;


    return 0;
}
