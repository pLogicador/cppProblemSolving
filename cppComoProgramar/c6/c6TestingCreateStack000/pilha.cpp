// Implementa��o
#include <iostream>
#include "pilha.h"

using namespace std;

// Pilha'::' deve-se utilizar o operador de resolu��o de escopo para indicar qual classe cada fun��o perten�e!!

    // construtor
Pilha::Pilha()
{
    vet = new int[100]; // alocando espa�o para 100 inteiros
    max_tam = 99;
    topo = -1;
}

    // destrutor
Pilha::~Pilha()
{
    delete[] vet; //devolve(ou aloca) a mem�ria para pilha
}

// empilhar
void Pilha::empilhar( int element )
{
    if ( topo == max_tam ) // verifica se chegou ao tamanho m�xemo da pilha
    {
        cout << "Pilha Cheia!\n\n" << endl;
    }else
    {
        vet[++topo] = element; // incrementa e dps usa a vari�vel topo // come�a do �ndice zero
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

    // Se topo for igual a -1 retornar� 1(True: pilha vazia)
    // Se topo retornar diferente de -1 (False: pilha n�o est� vazia)
int Pilha::vazia()
{
    return ( topo == -1 );
}
