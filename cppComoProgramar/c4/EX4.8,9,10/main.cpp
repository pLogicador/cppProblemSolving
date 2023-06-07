#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x;// base
    int y;// expoente
    int i;// conta de 1 a y
    int power;// calcula x elevado � pot�ncia de y

    // inicializa��o das vari�veis
    i = 1;
    power = 1;

    cout << "Enter base as integer: ";// solicita base
    cin >> x;// insere base

    cout << "Enter exponent as an integer: ";// solicita expoente
    cin >> y;// insere expoente

    // conta de 1 a y e multiplica pot�ncia por x a cada vez
    while( i <= y )
    {
        power *= x;
        cout << "power *= x: " << power << "\n";
        i++;
    }

    cout << "\n";
    cout << "\npower = " << power << endl;

    return 0;
}

/*
ERRO: est� faltando a chave direita de fechamento do corpo while
SOLU��O: adicionar a chave direita de fechamento dps da intru��o C++;

ERRO: utilizou inser��o de fluxo em vez de extra��o de fluxo
SOLU��O: alterar << para >>;

ERRO: ponto-e-v�gula dps de else resulta em erro de l�gica.
A segunda instru��o de sa�da sempre ser� executada
SOLU��O: remove-se o ponto-e-v�rgula dpss de else


OBS!!:
O valor da vari�vel z nunca � alterado na instru��ao while. Portanto,
se a conddi��o de continua��o ddo loop( z >= 0) for inicialmente true,
um loop infinito � criado.
Para evitar o loop infinito, z deve ser decrementado de modo que acabe se tornando menor que 0.
*/
