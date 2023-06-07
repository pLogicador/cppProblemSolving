#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x;// base
    int y;// expoente
    int i;// conta de 1 a y
    int power;// calcula x elevado à potência de y

    // inicialização das variáveis
    i = 1;
    power = 1;

    cout << "Enter base as integer: ";// solicita base
    cin >> x;// insere base

    cout << "Enter exponent as an integer: ";// solicita expoente
    cin >> y;// insere expoente

    // conta de 1 a y e multiplica potência por x a cada vez
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
ERRO: está faltando a chave direita de fechamento do corpo while
SOLUÇÃO: adicionar a chave direita de fechamento dps da intrução C++;

ERRO: utilizou inserção de fluxo em vez de extração de fluxo
SOLUÇÃO: alterar << para >>;

ERRO: ponto-e-vígula dps de else resulta em erro de lógica.
A segunda instrução de saída sempre será executada
SOLUÇÃO: remove-se o ponto-e-vírgula dpss de else


OBS!!:
O valor da variável z nunca é alterado na instruçãao while. Portanto,
se a conddição de continuação ddo loop( z >= 0) for inicialmente true,
um loop infinito é criado.
Para evitar o loop infinito, z deve ser decrementado de modo que acabe se tornando menor que 0.
*/
