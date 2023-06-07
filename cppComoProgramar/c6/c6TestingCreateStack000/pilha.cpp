// Implementação
#include <iostream>
#include "pilha.h"

using namespace std;

// Pilha'::' deve-se utilizar o operador de resolução de escopo para indicar qual classe cada função pertençe!!

    // construtor
Pilha::Pilha()
{
    vet = new int[100]; // alocando espaço para 100 inteiros
    max_tam = 99;
    topo = -1;
}

    // destrutor
Pilha::~Pilha()
{
    delete[] vet; //devolve(ou aloca) a memória para pilha
}

// empilhar
void Pilha::empilhar( int element )
{
    if ( topo == max_tam ) // verifica se chegou ao tamanho máxemo da pilha
    {
        cout << "Pilha Cheia!\n\n" << endl;
    }else
    {
        vet[++topo] = element; // incrementa e dps usa a variável topo // começa do índice zero
    }
}


    // desempilhar
void Pilha::desempilhar()
{
    if ( topo == -1 )
    {
        cout << "Pilha Vazia!\n\n" << endl;
    }else
    {
        topo--;
    }
}


int Pilha::getTopo()
{
    if ( topo != -1 )
    {
        return vet[topo];
    }
    return -1;
}

    // Se topo for igual a -1 retornará 1(True: pilha vazia)
    // Se topo retornar diferente de -1 (False: pilha não está vazia)
int Pilha::vazia()
{
    return ( topo == -1 );
}
