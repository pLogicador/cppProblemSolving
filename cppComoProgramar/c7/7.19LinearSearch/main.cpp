
// Pesquisa linear em um array.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Prot�tipo da fun��o de pesquisa linear
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

    return 0; // Indica termina��o bem-sucedida
}

// Compara a chave com cada elemento do array at� que a localiza��o seja encontrada
// ou at� que o fim do array seja alcan�ado. Retorna o �ndice do elemento se a chave for
// encontrada ou -1 caso contr�rio.
int linearSearch(const int array[], int key, int sizeOfArray)
{
    for (int index = 0; index < sizeOfArray; index++)
    {
        if (array[index] == key) // Se a chave for encontrada
            return index; // Retorna o �ndice do elemento
    }

    return -1; // Chave n�o encontrada
}
