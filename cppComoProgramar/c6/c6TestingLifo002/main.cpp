// Implementando o TAD Pilha (Stack)

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
    Pilha()
    {
        vet = new int[100]; // alocando espa�o para 100 inteiros
        max_tam = 99;
        topo = -1;
    }

    // destrutor
    ~Pilha()
    {
        delete[] vet; //devolve(ou aloca) a mem�ria para pilha
    }

    // empilhar
    void empilhar( int element )
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
    void desempilhar()
    {
        if ( topo == -1 )
        {
            cout << "Pilha Vazia!\n\n" << endl;
        }else
        {
            topo--;
        }
    }


    int getTopo()
    {
        if ( topo != -1 )
        {
            return vet[topo];
        }
        return -1;
    }

    // Se topo for igual a -1 retornar� 1(True: pilha vazia)
    // Se topo retornar diferente de -1 (False: pilha n�o est� vazia)
    int vazia()
    {
        return ( topo == -1 );
    }


};





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
