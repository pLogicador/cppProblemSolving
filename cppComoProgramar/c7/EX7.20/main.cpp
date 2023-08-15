/*
    7.20 (Sistema de reservas de passagens áreas) Uma pequena companhia aérea acabou de comprar um computador para seu novo sistema
    automatizado de reservas. Você foi solicitado a programar o novo sistema. Você escreverá um programa para atribuir assentos em cada
    vôo da companhia aérea (capacidade: 10 assentos).


    1.  O programa começa com a definição de algumas constantes, incluindo o número total de assentos disponíveis e a
        declaração de um array seats que representa o estado dos assentos do avião. Todos os elementos do array são
        inicializados como 0, indicando que todos os assentos estão vazios.

    2.  Em seguida, temos a definição das funções assignSeat e printBoardingPass. A função assignSeat é responsável por
        atribuir um assento ao passageiro com base na escolha feita (primeira classe ou classe econômica). A função
        printBoardingPass é usada para imprimir o bilhete de embarque com o número do assento e a classe.

    3.  No main, o programa entra em um loop infinito para solicitar a escolha do usuário. É exibido um menu de
        opções para escolher entre primeira classe e classe econômica. O usuário insere sua escolha.

    4.  A função assignSeat é chamada com base na escolha do usuário. Se a escolha for 1 (primeira classe), o programa
        verifica se há assentos disponíveis na primeira classe (assentos de 1 a 5) percorrendo o array seats.
        Se um assento estiver disponível, ele é atribuído ao passageiro, o elemento correspondente no
        array seats é atualizado para 1 e o bilhete de embarque é impresso. Caso contrário, se a
        primeira classe estiver cheia, o programa pergunta ao passageiro se ele aceita ficar na
        classe econômica. Se o passageiro aceitar, a função assignSeat é chamada novamente com
        o argumento 2 para atribuir um assento na classe econômica. Caso contrário, a
        mensagem "Next flight leaves in 3 hours" é exibida.

    5.  Se a escolha do usuário for 2 (classe econômica), o processo é semelhante ao descrito acima,
        mas verificando os assentos disponíveis na classe econômica (assentos de 6 a 10).

    6.  Após a atribuição do assento e a impressão do bilhete de embarque, o programa retorna ao loop para
        solicitar uma nova escolha ao usuário.


        OBS:
        A função printBoardingPass é responsável por imprimir o bilhete de embarque do passageiro, exibindo o
        número do assento e a classe em que ele está alocado. A função recebe dois parâmetros:
        seatNumber (número do assento) e seatClass (classe do assento).

        1.  A função começa imprimindo algumas informações básicas, como o cabeçalho do bilhete de embarque e o número do assento.

        2.  Em seguida, a função verifica a classe do assento. Se a classe for 1, é exibida a mensagem "First Class"
            indicando que o passageiro está na primeira classe. Caso contrário, se a classe for 2, é exibida a
            mensagem "Economy Class" indicando que o passageiro está na classe econômica.

        3.  Após imprimir as informações do assento e da classe, a função encerra.


*/
#include <iostream>
using namespace std;



const int NUM_ASSENTOS = 10;
int assentos[NUM_ASSENTOS] = {0};

void atribuirAssento(int tipoAssento);
void printCartaoEmbarque(int numAssento, int tipoAssento);



int main()
{
    int escolha;


    while(true)
    {
        cout << "Digite 1 para 'Primeira Classe' e Digite 2 para 'Economico'" << endl;
        cout << "Digite sua escolha(1 ou 2): " ;
        cin >> escolha;


        if (escolha == 1)
        {
            atribuirAssento(1);
        } else if (escolha == 2) {
            atribuirAssento(2);
        } else {
            cout << "Escolha invalida. Por favor tente novamente. " << endl;
        }
        cout << endl;

    }



    return 0;
};








void atribuirAssento(int tipoAssento)
{
    int numAssento;



    if (tipoAssento == 1)
    {
        // verificar se há assentos disponíveis na primeira classe
        for (numAssento = 0; numAssento < 5; numAssento++)
        {
            if (assentos[numAssento] == 0)
            {
                assentos[numAssento] = 1;
                printCartaoEmbarque( numAssento + 1, tipoAssento );
                return;
            }
        }

        int escolha;
        cout << "A Primeira Classe esta lotada. Voce prefere a Classe Economica? (1 para Sim, 0 para Nao): ";
        cin >> escolha;

        if (escolha == 1)
        {
            atribuirAssento(2);
        } else {
            cout << "O proximo voo sai em 3 horas." << endl;
        }

    } else if (tipoAssento == 2){

        for (numAssento = 5; numAssento < NUM_ASSENTOS; numAssento++)
        {
            if (assentos[numAssento] == 0)
            {
                assentos[numAssento] = 1;
                printCartaoEmbarque(numAssento + 1, tipoAssento);
                return;
            }
        }


        int escolha;
        cout << "A Classe Economica esta lotada. Voce prefere a Primeira Classe? (1 para Sim, 0 para Nao): ";
        cin >> escolha;

        if (escolha == 1)
        {
            atribuirAssento(1);
        } else {
            cout << "O proximo voo sai em 3 horas. " << endl;
        }
    }
};


void printCartaoEmbarque( int numAssento, int tipoAssento )
{
    string nomeTipoAssento;

    // Sem o operador ternário
    if ( tipoAssento == 1 )
    {
        nomeTipoAssento = "Primeira classe";
    } else {
        nomeTipoAssento = "Economica";
    }

    // Com o operador ternário
    // ou string nomeTipoAssento = (tipoAssento == 1) ? "Primeira classe" : "Economica";


    cout << "Cartao de Embarque" << endl;
    cout << "Numero de Assento: " << numAssento << endl;
    cout << "Classe: " << nomeTipoAssento << endl;
};













