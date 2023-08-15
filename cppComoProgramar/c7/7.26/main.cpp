// Figura 7.26: fig07_26.cpp
// Demonstra��o do template de classe vector da C++ Standard Library.
#include <iostream>
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::vector;

void outputVector(const vector<int>&);  // exibe o vetor
void inputVector(vector<int>&);        // insere valores no vetor

int main() {
  vector<int> integers1(7);   // vector<int> de 7 elementos
  vector<int> integers2(10);  // vector<int> de 10 elementos

  // imprime o tamanho e o conte�do de integers1
  cout << "Size of vector integers1 is " << integers1.size()
       << "\nVector after initialization:" << endl;
  outputVector(integers1);

  // imprime o tamanho e o conte�do de integers2
  cout << "\nSize of vector integers2 is " << integers2.size()
       << "\nVector after initialization:" << endl;
  outputVector(integers2);

  // insere e imprime integers1 e integers2
  cout << "\nEnter 17 integers:" << endl;
  inputVector(integers1);
  inputVector(integers2);

  cout << "\nAfter input, the vectors contain:\n"
       << "integers1:" << endl;
  outputVector(integers1);
  cout << "integers2:" << endl;
  outputVector(integers2);

  // utiliza operador de desigualdade (!=) com objetos vector
  cout << "\nEvaluating: integers1 != integers2" << endl;
  if (integers1 != integers2)
    cout << "integers1 and integers2 are not equal" << endl;

  // cria o vector integers3 utilizando integers1 como um
  // inicializador; imprime tamanho e conte�do
  vector<int> integers3(integers1);  // construtor de c�pia
  cout << "\nSize of vector integers3 is " << integers3.size()
       << "\nVector after initialization:" << endl;
  outputVector(integers3);

  // utiliza operador atribui��o (=) sobrecarregado
  cout << "\nAssigning integers2 to integers1:" << endl;
  integers1 = integers2;  // integers1 � maior que integers2
  cout << "integers1:" << endl;
  outputVector(integers1);
  cout << "integers2:" << endl;
  outputVector(integers2);

  // utiliza operador de igualdade (==) com objetos vector
  cout << "\nEvaluating: integers1 == integers2" << endl;
  if (integers1 == integers2)
    cout << "integers1 and integers2 are equal" << endl;

  // utiliza colchetes para criar rvalue
  cout << "\nintegers1[5] is " << integers1[5];

  // utiliza colchetes para criar lvalue
  cout << "\n\nAssigning 1000 to integers1[5]" << endl;
  integers1[5] = 1000;
  cout << "integers1:" << endl;
  outputVector(integers1);

  // tentativa de utilizar subscrito fora do intervalo
  cout << "\nAttempt to assign 1000 to integers1.at(15)" << endl;
  integers1.at(15) = 1000;  // ERRO: fora do intervalo

  return 0;
}  // fim de main

// gera sa�da do conte�do do vetor
void outputVector(const vector<int>& array) {
  size_t i;  // declara a vari�vel de controle

  for (i = 0; i < array.size(); i++) {
    cout << setw(12) << array[i];

    if ((i + 1) % 4 == 0)  // 4 n�meros por linha de sa�da
      cout << endl;
  }  // fim do for

  if (i % 4 != 0)
    cout << endl;
}  // fim da fun��o outputVector

// insere o conte�do do vetor
void inputVector(vector<int>& array) {
  for (size_t i = 0; i < array.size(); i++)
    cin >> array[i];
}  // fim da fun��o inputVector
