#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // define o tamanho do arrays
    const int responseSize = 40;
    const int frequencySize = 11;

    // coloca as respostas da enquete no array responses
    const int responses[responseSize] = {1, 2, 6, 4, 8, 5, 9, 7, 8,
                                         10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7,
                                         6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6,
                                         7, 5, 6, 4, 8, 6, 8, 10};

    // será utilizado para armazenar a contagem de frequência de cada resposta
    int frequency[frequencySize] = {0};


    /* para cada resposta, seleciona o elemento de respostas e utiliza esse valor
        como subscrito de freqüência para determinar o elemento a incrementar*/
    for (int answer = 0; answer < responseSize; answer++)
    {
        frequency[ responses[answer] ]++;
    }

    cout << "Rating" << setw(17) << "Frequency" << endl;

    // gera saída do valor de cada elemento do array
    for (int rating = 1; rating < frequencySize; rating++)
    {
        cout << setw(6) << rating
            << setw(17) << frequency[rating] << endl;
    }

    return 0;
}

/* VERSÃO MAIS SIMPLES DE CONTAGEM DOS ELEMENTOS EM UM ARRAY


int main()
{
    // Tamanho do array de respostas
    const int responseSize = 40;

    // Tamanho do array de frequência
    const int frequencySize = 11;

    // Array de respostas da enquete
    int responses[responseSize] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
                                   1, 6, 3, 8, 6, 10, 3, 8, 2, 7,
                                   6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
                                   5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    // Array de frequência
    int frequency[frequencySize] = {0};

    // Contagem de frequência
    for (int i = 0; i < responseSize; i++)
    {
        int answer = responses[i];
        frequency[answer]++;
    }

    // Exibição dos resultados
    cout << "Rating" << setw(17) << "Frequency" << endl;

    for (int rating = 1; rating < frequencySize; rating++)
    {
        cout << setw(6) << rating
            << setw(17) << frequency[rating] << endl;
    }

    return 0;
}
*/





