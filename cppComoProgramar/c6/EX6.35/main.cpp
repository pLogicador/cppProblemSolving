/*
Programa: EX6.35 (Exerc�cio 6.35, 6.36, 6.37)
  Autor: Pedro Miranda
  Data: 07/06/2023
  Descri��o: Escrevi um programa que ajuda um aluno da escola prim�ria a aprender multiplica��o.
                Utilizei n�meros aleat�rios gerados com a fun��o rand para criar perguntas de multiplica��o.
                Ap�s o aluno responder, verificamos se a resposta est� correta ou n�o. Se estiver correta,
                o programa o parabeniza com uma mensagem aleat�ria. Caso contr�rio, o aluno recebe uma
                mensagem aleat�ria para tentar novamente. Ao final das perguntas, � calculada a
                porcentagem de respostas corretas. Caso a porcentagem seja menor que 75%,
                o programa sugere que o aluno pe�a ajuda extra ao professor.



                COMO FUNCIONA?
                1. A fun��o generateNumber() � definida para gerar um n�mero aleat�rio entre 1 e 9 usando a fun��o rand() e
                    o operador %.

                2. Duas novas fun��es, printRespostaCorreta() e printRespostaIncorreta(), s�o adicionadas para imprimir
                    respostas variadas para respostas corretas e incorretas, respectivamente.

                3. A fun��o selectRandomResponse() � utilizada para selecionar um n�mero aleat�rio entre 1 e 4,
                    que � usado em um switch para escolher uma resposta apropriada.

                4. A fun��o srand(time(0)) � chamada no main() para inicializar a semente do gerador de n�meros aleat�rios.

                5. O programa utiliza um loop for para fazer 10 perguntas ao aluno.

                6. Ap�s cada resposta do aluno, a fun��o apropriada (printRespostaCorreta() ou printRespostaIncorreta()) �
                    chamada para imprimir uma resposta variada.

                7. No final das 10 perguntas, � calculada a porcentagem de respostas corretas.

                8. Se a porcentagem de respostas corretas for menor que 75%, � exibida a mensagem
                    "Pe�a ao seu professor uma ajuda extra".


*/



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int selectRandomResponse();
void printCorrectAnswer();
void printIncorrectAnswer();
int generateRandomNumber();




int main()
{
    // Inicializando a semente do gerador de n�meros aleat�rios
    srand(time(0));

    int n1, n2, n3, answer, result;
    int correctAnswers = 0;
    int incorrectAnswers = 0;


    for ( int i = 0; i <= 10; i++)
    {
        // Gerando dois n�meros aleat�rios
        n1 = generateRandomNumber();
        n2 = generateRandomNumber();

        // Guardando a multiplica��o dos dois valores em 'result'
        result = n1 * n2;


        // Aqui, pergunta-se ao usu�rio a resposta correta do produto
        cout << "Quanto eh " << n1 << " vezes " << n2 << ": ";
        cin >> answer;     // l� resposta


        if ( answer == result )
        {
            printCorrectAnswer();
            correctAnswers++;
            cout << "\n";
        }
        else
        {
            printIncorrectAnswer();
            incorrectAnswers++;
            cout << "\n";
        }
    }


    // Calcula a porcentagem de respostas corretas
    int correctPorcentage = ( static_cast<double>( correctAnswers ) / 10 ) * 100;

    cout << "Porcentem de respostas corretas: " << correctAnswers << "%" << endl;

    // Verificando se a porcentagem � menor que 75%
    if ( correctAnswers < 75 )
    {
        cout << "Peca a seu professor uma ajuda extra " << endl;
    }



    return 0;
}




// Fun��o que gera um n�mero aleat�rio entre 1 e 4
int selectRandomResponse()
{
    return rand() % 4 + 1;
};




// Fun��o que imprime quando a resposta estiver correta
void printCorrectAnswer()
{

   switch( selectRandomResponse() )
   {
        case 1:
            cout << "Muito bom!" << endl;
            break;
        case 2:
            cout << "Excelente!" << endl;
            break;
        case 3:
            cout << "Bom trabalho!" << endl;
            break;
        case 4:
            cout << "Continue assim!" << endl;
            break;
        default:
            break;

   }
};




// Fun��o que imprime quando a resposta estiver errada
void printIncorrectAnswer()
{
    switch( selectRandomResponse() )
    {
        case 1:
            cout << "Nao, tente novamente." << endl;
            break;
        case 2:
            cout << "Errado. Tente mais uma vez." << endl;
            break;
        case 3:
            cout << "Nao desista!" << endl;
            break;
        case 4:
            cout << "Nao. Continue tentando." << endl;
            break;
        default:
            break;
    }
};




// Fun��o que gera um n�mero aleat�rio entre 1 e 9
int generateRandomNumber()
{
    return rand() % 9 + 1;
};

