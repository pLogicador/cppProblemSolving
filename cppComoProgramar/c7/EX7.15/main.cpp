/*
    7.15 Utilize um array unidimensional para resolver o seguinte problema. Leia 20 n�meros, cada um dos quais est� entre 10 e 100,
    inclusive.
    � medida que cada n�mero � lido, valide-o e armazene-o no array somente se ele n�o for uma duplicata de um n�mero j� lido. Depois
    de ler todos os valores, exiba somente os valores �nicos que o usu�rio inseriu. Previna-se para o �pior caso� em que todos os
    20 n�meros s�o diferentes. Utilize o menor array poss�vel para resolver esse problema.



    A vari�vel count � usada para acompanhar o n�mero de elementos �nicos inseridos. � medida que voc� l� cada n�mero,
    verifica-se se ele j� est� presente no array, percorrendo os elementos anteriores at� o �ndice count.
    Se o n�mero for encontrado, � marcado como uma duplicata e n�o � armazenado no array. Caso contr�rio,
    ele � armazenado na pr�xima posi��o dispon�vel e o contador � incrementado.
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


        // Verifica se o n�mero est� no intervalo v�lido
        if(value < 10 || value > 100 )
        {
            cout << "Numero invalido. Digite novamente.\n";
            i--;        // Repete a leitura do n�mero inv�lido
            continue;
        }

        // Verifica se o n�mero j� existe no array
        if( isDuplicate(numbers, count, value) )
        {
            cout << "Numero " << value << " ja foi inserido. Digite novamente.\n";
            i--;    // Repete a leitura do n�mero duplicado
            continue;
        }

        // Armazena o n�mero no array
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
            return true;    // O n�mero j� existe no array
        }
    }
    return false;   // O n�mero � �nico
};
