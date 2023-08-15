/*
    7.20 (Sistema de reservas de passagens �reas) Uma pequena companhia a�rea acabou de comprar um computador para seu novo sistema
    automatizado de reservas. Voc� foi solicitado a programar o novo sistema. Voc� escrever� um programa para atribuir assentos em cada
    v�o da companhia a�rea (capacidade: 10 assentos).


    1.  O programa come�a com a defini��o de algumas constantes, incluindo o n�mero total de assentos dispon�veis e a
        declara��o de um array seats que representa o estado dos assentos do avi�o. Todos os elementos do array s�o
        inicializados como 0, indicando que todos os assentos est�o vazios.

    2.  Em seguida, temos a defini��o das fun��es assignSeat e printBoardingPass. A fun��o assignSeat � respons�vel por
        atribuir um assento ao passageiro com base na escolha feita (primeira classe ou classe econ�mica). A fun��o
        printBoardingPass � usada para imprimir o bilhete de embarque com o n�mero do assento e a classe.

    3.  No main, o programa entra em um loop infinito para solicitar a escolha do usu�rio. � exibido um menu de
        op��es para escolher entre primeira classe e classe econ�mica. O usu�rio insere sua escolha.

    4.  A fun��o assignSeat � chamada com base na escolha do usu�rio. Se a escolha for 1 (primeira classe), o programa
        verifica se h� assentos dispon�veis na primeira classe (assentos de 1 a 5) percorrendo o array seats.
        Se um assento estiver dispon�vel, ele � atribu�do ao passageiro, o elemento correspondente no
        array seats � atualizado para 1 e o bilhete de embarque � impresso. Caso contr�rio, se a
        primeira classe estiver cheia, o programa pergunta ao passageiro se ele aceita ficar na
        classe econ�mica. Se o passageiro aceitar, a fun��o assignSeat � chamada novamente com
        o argumento 2 para atribuir um assento na classe econ�mica. Caso contr�rio, a
        mensagem "Next flight leaves in 3 hours" � exibida.

    5.  Se a escolha do usu�rio for 2 (classe econ�mica), o processo � semelhante ao descrito acima,
        mas verificando os assentos dispon�veis na classe econ�mica (assentos de 6 a 10).

    6.  Ap�s a atribui��o do assento e a impress�o do bilhete de embarque, o programa retorna ao loop para
        solicitar uma nova escolha ao usu�rio.


        OBS:
        A fun��o printBoardingPass � respons�vel por imprimir o bilhete de embarque do passageiro, exibindo o
        n�mero do assento e a classe em que ele est� alocado. A fun��o recebe dois par�metros:
        seatNumber (n�mero do assento) e seatClass (classe do assento).

        1.  A fun��o come�a imprimindo algumas informa��es b�sicas, como o cabe�alho do bilhete de embarque e o n�mero do assento.

        2.  Em seguida, a fun��o verifica a classe do assento. Se a classe for 1, � exibida a mensagem "First Class"
            indicando que o passageiro est� na primeira classe. Caso contr�rio, se a classe for 2, � exibida a
            mensagem "Economy Class" indicando que o passageiro est� na classe econ�mica.

        3.  Ap�s imprimir as informa��es do assento e da classe, a fun��o encerra.


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
        // verificar se h� assentos dispon�veis na primeira classe
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

    // Sem o operador tern�rio
    if ( tipoAssento == 1 )
    {
        nomeTipoAssento = "Primeira classe";
    } else {
        nomeTipoAssento = "Economica";
    }

    // Com o operador tern�rio
    // ou string nomeTipoAssento = (tipoAssento == 1) ? "Primeira classe" : "Economica";


    cout << "Cartao de Embarque" << endl;
    cout << "Numero de Assento: " << numAssento << endl;
    cout << "Classe: " << nomeTipoAssento << endl;
};













