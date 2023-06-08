/*
Programa: EX6.35 (Exercício 6.35, 6.36, 6.37)
  Autor: Pedro Miranda
  Data: 07/06/2023
  Descrição: Escrevi um programa que ajuda um aluno da escola primária a aprender multiplicação.
                Utilizei números aleatórios gerados com a função rand para criar perguntas de multiplicação.
                Após o aluno responder, verificamos se a resposta está correta ou não. Se estiver correta,
                o programa o parabeniza com uma mensagem aleatória. Caso contrário, o aluno recebe uma
                mensagem aleatória para tentar novamente. Ao final das perguntas, é calculada a
                porcentagem de respostas corretas. Caso a porcentagem seja menor que 75%,
                o programa sugere que o aluno peça ajuda extra ao professor.



                COMO FUNCIONA?
                1. A função generateNumber() é definida para gerar um número aleatório entre 1 e 9 usando a função rand() e
                    o operador %.

                2. Duas novas funções, printRespostaCorreta() e printRespostaIncorreta(), são adicionadas para imprimir
                    respostas variadas para respostas corretas e incorretas, respectivamente.

                3. A função selectRandomResponse() é utilizada para selecionar um número aleatório entre 1 e 4,
                    que é usado em um switch para escolher uma resposta apropriada.

                4. A função srand(time(0)) é chamada no main() para inicializar a semente do gerador de números aleatórios.

                5. O programa utiliza um loop for para fazer 10 perguntas ao aluno.

                6. Após cada resposta do aluno, a função apropriada (printRespostaCorreta() ou printRespostaIncorreta()) é
                    chamada para imprimir uma resposta variada.

                7. No final das 10 perguntas, é calculada a porcentagem de respostas corretas.

                8. Se a porcentagem de respostas corretas for menor que 75%, é exibida a mensagem
                    "Peça ao seu professor uma ajuda extra".


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
    // Inicializando a semente do gerador de números aleatórios
    srand(time(0));

    int n1, n2, n3, answer, result;
    int correctAnswers = 0;
    int incorrectAnswers = 0;


    for ( int i = 0; i <= 10; i++)
    {
        // Gerando dois números aleatórios
        n1 = generateRandomNumber();
        n2 = generateRandomNumber();

        // Guardando a multiplicação dos dois valores em 'result'
        result = n1 * n2;


        // Aqui, pergunta-se ao usuário a resposta correta do produto
        cout << "Quanto eh " << n1 << " vezes " << n2 << ": ";
        cin >> answer;     // lê resposta


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

    // Verificando se a porcentagem é menor que 75%
    if ( correctAnswers < 75 )
    {
        cout << "Peca a seu professor uma ajuda extra " << endl;
    }



    return 0;
}




// Função que gera um número aleatório entre 1 e 4
int selectRandomResponse()
{
    return rand() % 4 + 1;
};




// Função que imprime quando a resposta estiver correta
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




// Função que imprime quando a resposta estiver errada
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




// Função que gera um número aleatório entre 1 e 9
int generateRandomNumber()
{
    return rand() % 9 + 1;
};

