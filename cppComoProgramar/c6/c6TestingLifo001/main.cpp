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




    // verificando se a pilha possui elementos

    if ( cards.size() == 0 ) // or if (cards.empty()){}
    {
        cout << "Pilha Vazia\n\n" << endl;
    }else
    {
        cout << "Pilha com cartas\n\n" << endl;
    }




    // rotina para excluir tds os elementos da pilha

    while ( !cards.empty() ) // enquanto cartas não for vazia
    {
        cards.pop(); // zera tds os elementos
    }



    cout << "\nTamanho da Pilha:  " << cards.size() << endl;

    // revela o último elemento(localizado no topo)
    cout << "\nCarta do Topo: " << cards.top() << endl;





    // retirando elemtos da pilha
    cards.pop(); // retira primeiro pelo topo
    cards.pop();

    cout << "\nNova Carta do topo:  " << cards.top() << endl;



    return 0;
}
