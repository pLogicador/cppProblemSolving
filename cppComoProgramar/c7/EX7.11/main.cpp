/*
    7.11 (Classifica��o por borbulhamento (bubble sort)) No algoritmo de classifica��o por borbulhamento, valores menores gradualmente
    sobem para a parte superior do array como bolhas de ar subindo na �gua, enquanto as bolhas maiores afundam. A classifica��o por
    borbulhamento faz v�rias passagens pelo array. Em cada passagem, sucessivos pares de elementos s�o comparados. Se um par estiver
    na ordem crescente (ou os valores forem id�nticos), deixamos os valores como eles est�o. Se um par estiver na ordem decrescente, seus
    valores s�o trocados no array. Escreva um programa que classifica um array de 10 inteiros utilizando classifica��o por borbulhamento


    7.12 A classifica��o por borbulhamento descrita no Exerc�cio 7.11 � ineficiente para arrays grandes. Fa�a as seguintes modifica��es
    simples para aprimorar o desempenho da classifica��o por borbulhamento:

    a) Depois da primeira passagem, garante-se que o maior n�mero est� no elemento de n�mero mais alto do array; ap�s a segunda passagem,
    os dois n�meros mais altos est�o �no lugar�; e assim por diante. Em vez de fazer nove compara��es em cada passagem, modifique a
    classifica��o por borbulhamento para fazer oito compara��es na segunda passagem, sete na terceira passagem e assim por diante.

    b) Os dados no array j� podem estar na ordem adequada ou ordem quase adequada, ent�o por que fazer nove passagens se menos seriam
    suficientes? Modifique a classifica��o para verificar no fim de cada passagem se alguma troca foi feita. Se nenhuma troca tiver sido
    feita, ent�o os dados j� devem estar na ordem apropriada; portanto, o programa deve terminar. Se trocas foram feitas, ent�o pelo menos
    mais uma passagem � necess�ria.



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
    // 7.12 b) utilizamos a vari�vel 'troca' para interromper o loop se n�o houver nenhuma troca
    bool troca;
    for ( int i = 0; i < size - 1; i++ )
    {
        troca = false;
        for ( int j = 0; j < size - i - 1; j++ )    /* 7.12 a) no loop interno 'j < size - i - 1', i representa o n�mero da passagem atual.*/
        {
            if ( arr[j] > arr[ j + 1 ] )
            {
                // � trocado os valores quando o valor do elemento � esquerda � maior que o valor do elemento � direita
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                troca = true;
            }
        }
        if ( !troca )
        {
            // Se n�o houve trocas na passagem atual, o array est� ordenado
            break;
        }
    }
};










