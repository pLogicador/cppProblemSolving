// Prot�tipos
#include <iostream>
using namespace std;


class Pilha
{
private:
    int * vet;      // ponteiro
    int max_tam;    // m�ximo do tamanho da pilha
    int topo;       // vari�vel que marca o topo da pilha
public:
    // construtor
    Pilha();
    // destrutor
    ~Pilha();

    // empilhar
    void empilhar( int element );
    // desempilhar
    void desempilhar();

    int getTopo();
    int vazia();
};
