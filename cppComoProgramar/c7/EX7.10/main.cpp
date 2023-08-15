/*
    Utilize um array unidimensional para resolver o seguinte problema. Uma empresa paga seu pessoal de vendas por comiss�o.
    Os vendedores recebem $ 200 por semana mais 9% de suas vendas brutas por semana. Por exemplo, um vendedor que
    vende $ 5.000 brutos em uma semana recebe $ 200 mais 9% de $ 5.000 ou um total de $ 650.

    Escreva um programa (utilizando um array de contadores) que determina quanto o pessoal de vendas ganhou em cada um dos
    seguintes intervalos (suponha que o sal�rio de cada vendedor foi truncado para uma quantidade do tipo inteiro):
    a) $ 200�$ 299
    b) $ 300�$ 399
    c) $ 400�$ 499
    d) $ 500�$ 599
    e) $ 600�$ 699
    f) $ 700�$ 799
    g) $ 800�$ 899
    h) $ 900�$ 999
    i) $ 1.000 e acima



    O programa utiliza a f�rmula salary = BASE_SALARY + COMMISSION_RATE * salesAmount para calcular o sal�rio de cada vendedor com
    base nas vendas brutas informadas. A taxa de comiss�o (COMMISSION_RATE) � aplicada sobre as vendas brutas (salesAmount) e
    somada ao sal�rio base fixo (BASE_SALARY).

    Os intervalos de sal�rio s�o determinados dividindo o sal�rio pelo tamanho do intervalo (INTERVAL_SIZE) e armazenando a
    quantidade de vendedores em cada intervalo no array sales. Os resultados s�o exibidos ao final, mostrando os
    intervalos de sal�rio e a quantidade de vendedores em cada um deles.
*/

#include <iostream>
#include <cmath>
using namespace std;



const int NUM_INTERVALOS = 9;           // n�mero de intervalos de sal�rio.
const double SALARIO_BASE = 200;        // sal�rio base fixo que os vendedores recebem, que � de $200.
const double TAXA_COMISSAO = 0.09;      // taxa de comiss�o aplicada sobre as vendas brutas, que � de 9% (0.09).
const int TAMANHO_INTERVALO = 100;      // tamanho do intervalo de sal�rio, que � de $100.



int main()
{
    int vendas[NUM_INTERVALOS + 1] = {0};       /*  Inicializa todos os elementos do array com zero. Cada elemento do array vendas ir�
                                                    armazenar a quantidade de vendedores em um determinado intervalo de sal�rio.*/

    double qtdDeVendas;                         // valor de vendas brutas


    // solicita ao usu�rio que digite o valor de vendas brutas ou -1 para condi��o de sa�da
    cout << "Insira o valor de vendas brutas( -1 para encerrar ): ";
    cin >> qtdDeVendas;


    // Loop que calcula o sal�rio e atualiza os contadores
    while ( qtdDeVendas != -1 )
    {
        double salario = SALARIO_BASE + TAXA_COMISSAO * qtdDeVendas;        // C�lculo do sal�rio
        int indice;                                                         /*  Declara a vari�vel indice que ser� utilizada para
                                                                                armazenar o �ndice do intervalo de sal�rio.*/

        // Determina o �ndice correspondente ao intervalo de sal�rio
        if ( salario < (NUM_INTERVALOS + 1) * TAMANHO_INTERVALO )
        {
            indice = static_cast<int>( salario / TAMANHO_INTERVALO);        /* Verifica se o sal�rio est� abaixo do limite do �ltimo intervalo.*/

        } else {
            indice = NUM_INTERVALOS;                                        // Caso contr�rio, define o �ndice como o n�mero total de intervalos.
        }

        vendas[indice]++;                       // Incrementa o contador correspondente ao intervalo de sal�rio atual, armazenado no array vendas.


        /* Repete-se a solicita��o pois isso permite que o usu�rio insira m�ltiplos valores de vendas brutas para diferentes vendedores.*/
        cout << "Insira o valor de vendas brutas (ou -1 para encerrar): ";
        cin >> qtdDeVendas;
    }


    cout << "\n\nIntervalos de salario e quantidades de vendedores:\n";

    //  Itera sobre os intervalos de sal�rio.
    for( int i = 0; i < NUM_INTERVALOS; i++ )
    {
        // Exibe o intervalo de sal�rio atual.
        cout << "$" << (i + TAMANHO_INTERVALO + SALARIO_BASE) << "-" << ((i + 1) * TAMANHO_INTERVALO + SALARIO_BASE - 1) << ": ";
        cout << "\n" << vendas[i] << endl;                  // Exibe a quantidade de vendedores no intervalo de sal�rio atual.

    }
    // Exibe o �ltimo intervalo de sal�rio.
    cout << "$" << (NUM_INTERVALOS * TAMANHO_INTERVALO + SALARIO_BASE) << " e acima: ";
    cout << "\n" << vendas[ NUM_INTERVALOS ] << endl;       // Exibe a quantidade de vendedores no �ltimo intervalo de sal�rio.





    return 0;
}
