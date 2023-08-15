// Figura 7.20: fig07_20.cpp
// Este programa classifica os valores de um array em ordem crescente.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    const int arraySize = 10; // Tamanho do array 'data'
    int data[arraySize] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
    int insert; // Variável temporária para armazenar o elemento a ser inserido

    cout << "Unsorted array:\n";

    // Exibe o array original
    for (int i = 0; i < arraySize; i++)
        cout << setw(4) << data[i];

    // Classificação por inserção
    for (int next = 1; next < arraySize; next++)
    {
        insert = data[next]; // Armazena o valor no elemento atual

        int moveItem = next; // Inicializa a posição para inserir o elemento

        // Procura a posição para inserir o elemento atual
        while ((moveItem > 0) && (data[moveItem - 1] > insert))
        {
            // Desloca o elemento uma posição para a direita
            data[moveItem] = data[moveItem - 1];
            moveItem--;
        }

        data[moveItem] = insert; // Insere o elemento no array
    }

    cout << "\nSorted array:\n";

    // Exibe o array classificado
    for (int i = 0; i < arraySize; i++)
        cout << setw(4) << data[i];

    cout << endl;
    return 0; // Indica terminação bem-sucedida
}
