
// Pesquisa linear em um array.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Protótipo da função de pesquisa linear
int linearSearch(const int[], int, int);

int main()
{
    const int arraySize = 100; // Tamanho do array 'a'
    int a[arraySize]; // Cria o array 'a'
    int searchKey; // Valor a ser localizado no array 'a'

    // Preenche o array 'a' com alguns dados
    for (int i = 0; i < arraySize; i++)
        a[i] = 2 * i;

    cout << "Enter integer search key: ";
    cin >> searchKey;

    // Tenta localizar 'searchKey' no array 'a'
    int element = linearSearch(a, searchKey, arraySize);

    // Exibe os resultados
    if (element != -1)
        cout << "Found value in element " << element << endl;
    else
        cout << "Value not found" << endl;

    return 0; // Indica terminação bem-sucedida
}

// Compara a chave com cada elemento do array até que a localização seja encontrada
// ou até que o fim do array seja alcançado. Retorna o índice do elemento se a chave for
// encontrada ou -1 caso contrário.
int linearSearch(const int array[], int key, int sizeOfArray)
{
    for (int index = 0; index < sizeOfArray; index++)
    {
        if (array[index] == key) // Se a chave for encontrada
            return index; // Retorna o índice do elemento
    }

    return -1; // Chave não encontrada
}
