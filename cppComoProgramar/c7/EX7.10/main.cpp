/*
    Utilize um array unidimensional para resolver o seguinte problema. Uma empresa paga seu pessoal de vendas por comissão.
    Os vendedores recebem $ 200 por semana mais 9% de suas vendas brutas por semana. Por exemplo, um vendedor que
    vende $ 5.000 brutos em uma semana recebe $ 200 mais 9% de $ 5.000 ou um total de $ 650.

    Escreva um programa (utilizando um array de contadores) que determina quanto o pessoal de vendas ganhou em cada um dos
    seguintes intervalos (suponha que o salário de cada vendedor foi truncado para uma quantidade do tipo inteiro):
    a) $ 200–$ 299
    b) $ 300–$ 399
    c) $ 400–$ 499
    d) $ 500–$ 599
    e) $ 600–$ 699
    f) $ 700–$ 799
    g) $ 800–$ 899
    h) $ 900–$ 999
    i) $ 1.000 e acima



    O programa utiliza a fórmula salary = BASE_SALARY + COMMISSION_RATE * salesAmount para calcular o salário de cada vendedor com
    base nas vendas brutas informadas. A taxa de comissão (COMMISSION_RATE) é aplicada sobre as vendas brutas (salesAmount) e
    somada ao salário base fixo (BASE_SALARY).

    Os intervalos de salário são determinados dividindo o salário pelo tamanho do intervalo (INTERVAL_SIZE) e armazenando a
    quantidade de vendedores em cada intervalo no array sales. Os resultados são exibidos ao final, mostrando os
    intervalos de salário e a quantidade de vendedores em cada um deles.
*/

#include <iostream>
#include <cmath>
using namespace std;



const int NUM_INTERVALOS = 9;           // número de intervalos de salário.
const double SALARIO_BASE = 200;        // salário base fixo que os vendedores recebem, que é de $200.
const double TAXA_COMISSAO = 0.09;      // taxa de comissão aplicada sobre as vendas brutas, que é de 9% (0.09).
const int TAMANHO_INTERVALO = 100;      // tamanho do intervalo de salário, que é de $100.



int main()
{
    int vendas[NUM_INTERVALOS + 1] = {0};       /*  Inicializa todos os elementos do array com zero. Cada elemento do array vendas irá
                                                    armazenar a quantidade de vendedores em um determinado intervalo de salário.*/

    double qtdDeVendas;                         // valor de vendas brutas


    // solicita ao usuário que digite o valor de vendas brutas ou -1 para condição de saída
    cout << "Insira o valor de vendas brutas( -1 para encerrar ): ";
    cin >> qtdDeVendas;


    // Loop que calcula o salário e atualiza os contadores
    while ( qtdDeVendas != -1 )
    {
        double salario = SALARIO_BASE + TAXA_COMISSAO * qtdDeVendas;        // Cálculo do salário
        int indice;                                                         /*  Declara a variável indice que será utilizada para
                                                                                armazenar o índice do intervalo de salário.*/

        // Determina o índice correspondente ao intervalo de salário
        if ( salario < (NUM_INTERVALOS + 1) * TAMANHO_INTERVALO )
        {
            indice = static_cast<int>( salario / TAMANHO_INTERVALO);        /* Verifica se o salário está abaixo do limite do último intervalo.*/

        } else {
            indice = NUM_INTERVALOS;                                        // Caso contrário, define o índice como o número total de intervalos.
        }

        vendas[indice]++;                       // Incrementa o contador correspondente ao intervalo de salário atual, armazenado no array vendas.


        /* Repete-se a solicitação pois isso permite que o usuário insira múltiplos valores de vendas brutas para diferentes vendedores.*/
        cout << "Insira o valor de vendas brutas (ou -1 para encerrar): ";
        cin >> qtdDeVendas;
    }


    cout << "\n\nIntervalos de salario e quantidades de vendedores:\n";

    //  Itera sobre os intervalos de salário.
    for( int i = 0; i < NUM_INTERVALOS; i++ )
    {
        // Exibe o intervalo de salário atual.
        cout << "$" << (i + TAMANHO_INTERVALO + SALARIO_BASE) << "-" << ((i + 1) * TAMANHO_INTERVALO + SALARIO_BASE - 1) << ": ";
        cout << "\n" << vendas[i] << endl;                  // Exibe a quantidade de vendedores no intervalo de salário atual.

    }
    // Exibe o último intervalo de salário.
    cout << "$" << (NUM_INTERVALOS * TAMANHO_INTERVALO + SALARIO_BASE) << " e acima: ";
    cout << "\n" << vendas[ NUM_INTERVALOS ] << endl;       // Exibe a quantidade de vendedores no último intervalo de salário.





    return 0;
}
