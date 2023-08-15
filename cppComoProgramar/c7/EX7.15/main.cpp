/*
    7.15 Utilize um array unidimensional para resolver o seguinte problema. Leia 20 números, cada um dos quais está entre 10 e 100,
    inclusive.
    À medida que cada número é lido, valide-o e armazene-o no array somente se ele não for uma duplicata de um número já lido. Depois
    de ler todos os valores, exiba somente os valores únicos que o usuário inseriu. Previna-se para o ‘pior caso’ em que todos os
    20 números são diferentes. Utilize o menor array possível para resolver esse problema.



    A variável count é usada para acompanhar o número de elementos únicos inseridos. À medida que você lê cada número,
    verifica-se se ele já está presente no array, percorrendo os elementos anteriores até o índice count.
    Se o número for encontrado, é marcado como uma duplicata e não é armazenado no array. Caso contrário,
    ele é armazenado na próxima posição disponível e o contador é incrementado.
*/


#include <iostream>
using namespace std;

bool isDuplicate(int arr[], int size, int n );

int main()
{

    const int SIZE = 20;
    int numbers[SIZE];
    int count = 0;


    cout << "Insira 20 numeros entre 10 e 100: ";
    for(int i = 0; i < SIZE; i++)
    {
        int value;
        cin >> value;


        // Verifica se o número está no intervalo válido
        if(value < 10 || value > 100 )
        {
            cout << "Numero invalido. Digite novamente.\n";
            i--;        // Repete a leitura do número inválido
            continue;
        }

        // Verifica se o número já existe no array
        if( isDuplicate(numbers, count, value) )
        {
            cout << "Numero " << value << " ja foi inserido. Digite novamente.\n";
            i--;    // Repete a leitura do número duplicado
            continue;
        }

        // Armazena o número no array
        numbers[count] = value;
        count++;

    };
    cout << "Valores unicos inseridos.\n";
    for (int i = 0; i < count; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << "\n\n" << endl;






    return 0;
}


bool isDuplicate(int arr[], int size, int n )
{
    for(int i; i < size; i++)
    {
        if(arr[i] == n)
        {
            return true;    // O número já existe no array
        }
    }
    return false;   // O número é único
};
