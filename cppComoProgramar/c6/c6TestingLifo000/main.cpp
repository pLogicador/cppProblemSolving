#include <iostream>
#include <stack> // arquivo para trabalhar com pilha

using namespace std;

int main()
{

    stack<string> cards; // criando pilha

    // adicionando elementos na pilha
    cards.push( "Rei de Copas" );
    cards.push( "Rei de Espadas" );
    cards.push( "Rei de Ouro" );
    cards.push( "Rei de Paus" ); // último elemento


    cout << "\nTamanho da Pilha:  " << cards.size() << endl;

    // revela o último elemento(localizado no topo)
    cout << "\nCarta do Topo: " << cards.top() << endl;

    // retirando elemtos da pilha
    cards.pop(); // retira primeiro pelo topo



    cout << "\nNova Carta do topo:  " << cards.top() << endl;



    return 0;
}
