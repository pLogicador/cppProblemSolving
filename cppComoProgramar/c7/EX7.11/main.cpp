/*
    7.11 (Classificação por borbulhamento (bubble sort)) No algoritmo de classificação por borbulhamento, valores menores gradualmente
    sobem para a parte superior do array como bolhas de ar subindo na água, enquanto as bolhas maiores afundam. A classificação por
    borbulhamento faz várias passagens pelo array. Em cada passagem, sucessivos pares de elementos são comparados. Se um par estiver
    na ordem crescente (ou os valores forem idênticos), deixamos os valores como eles estão. Se um par estiver na ordem decrescente, seus
    valores são trocados no array. Escreva um programa que classifica um array de 10 inteiros utilizando classificação por borbulhamento


    7.12 A classificação por borbulhamento descrita no Exercício 7.11 é ineficiente para arrays grandes. Faça as seguintes modificações
    simples para aprimorar o desempenho da classificação por borbulhamento:

    a) Depois da primeira passagem, garante-se que o maior número está no elemento de número mais alto do array; após a segunda passagem,
    os dois números mais altos estão ‘no lugar’; e assim por diante. Em vez de fazer nove comparações em cada passagem, modifique a
    classificação por borbulhamento para fazer oito comparações na segunda passagem, sete na terceira passagem e assim por diante.

    b) Os dados no array já podem estar na ordem adequada ou ordem quase adequada, então por que fazer nove passagens se menos seriam
    suficientes? Modifique a classificação para verificar no fim de cada passagem se alguma troca foi feita. Se nenhuma troca tiver sido
    feita, então os dados já devem estar na ordem apropriada; portanto, o programa deve terminar. Se trocas foram feitas, então pelo menos
    mais uma passagem é necessária.



    OBS: A linha int tamanho = sizeof(exemplo) / sizeof(exemplo[0]); calcula o tamanho do array exemplo dividindo o tamanho total do
    array (sizeof(exemplo)) pelo tamanho de um elemento do array (sizeof(exemplo[0])).

*/


#include <iostream>
using namespace std;


void bubbleSort( int arr[], int size );

int main()
{
    //const int TOTAL = 10;
    int exemplo[] = { 5, 3, 2, 8, 10, 6, 5, 7, 4, 20 };
    int tamanho = sizeof(exemplo) / sizeof(exemplo[0]);

    cout << "Array Original: ";
    for ( int i = 0; i < tamanho; i++ )
    {
        cout << exemplo[i] << " ";
    }
    cout << "\n" << endl;


    bubbleSort( exemplo, tamanho );

    cout << "Array Ordenado: ";
    for ( int i = 0; i < tamanho; i++ )
    {
        cout << exemplo[i] << " ";
    }
    cout << endl;

    return 0;
}



void bubbleSort( int arr[], int size )
{
    // 7.12 b) utilizamos a variável 'troca' para interromper o loop se não houver nenhuma troca
    bool troca;
    for ( int i = 0; i < size - 1; i++ )
    {
        troca = false;
        for ( int j = 0; j < size - i - 1; j++ )    /* 7.12 a) no loop interno 'j < size - i - 1', i representa o número da passagem atual.*/
        {
            if ( arr[j] > arr[ j + 1 ] )
            {
                // é trocado os valores quando o valor do elemento à esquerda é maior que o valor do elemento à direita
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                troca = true;
            }
        }
        if ( !troca )
        {
            // Se não houve trocas na passagem atual, o array está ordenado
            break;
        }
    }
};










