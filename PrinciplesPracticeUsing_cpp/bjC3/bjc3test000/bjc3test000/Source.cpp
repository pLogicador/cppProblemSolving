#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }



int main()
{
	// ler nome e idade (1° versão)
	/*
	string primeiro_nome;	// primeiro_nome é uma variável do tipo string
	int idade;				// variável inteira
	cout << "Por favor, informe seu primeiro nome e sua idade (seguido de 'Enter'):\n";
	cin >> primeiro_nome;
	cin >> idade;


	cout << "Oi, " << primeiro_nome << " ( idade " << idade << " )\n";

	cout << "primeiro_nome" << " eh " << primeiro_nome << endl;
	*/




	// ler nome e idade (2° versão)
	/**
	string primeiro_nome = "???";	// variável string; ("???" significa "não sei o nome")
	int idade = -1;					// variável inteira; (-1 "significa não sei a idade")



	cout << "Por favor informe seu primeiro nome e sua idade\n";

	cin >> primeiro_nome >> idade;	// lê um string seguido de um inteiro
	cout << "Oi, " << primeiro_nome << "(idade " << idade << ")\n";
	*/



	// test2
	/*
	cout << "Por favor informe seu primeiro e segundo nomes \n";
	string primeiro;
	string segundo;

	cin >> primeiro >> segundo;		// lê dois strings
	cout << "Oi, " << primeiro << "" << segundo << "\n";
	*/



	// nome e idade (3° versão)
	/*
	string primeiro_nome;	// variável string; ("???" significa "não sei o nome")
	float idade;					// variável inteira; (-1 "significa não sei a idade") 
	int mes;
	int ano;


	cout << "Por favor informe seu primeiro nome e sua idade (em ponto flutuante)\n";
	cin >> primeiro_nome >> idade;	// lê um string seguido de um inteiro
	cout << "Poderia me dizer qual o numero do mes e do ano que estamos? ";
	cin >> mes >> ano;


	cout << "Oi, " << primeiro_nome << "\n" << "Idade: " << idade << "/" << mes << "/" << ano << "\n";
	*/


	/*
	// programa simples para usar operadores
	double n;

	cout << "Por favor, informe um valor em ponto flutuante: ";
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\ntriplo de n == " << 3 * n
		<< "\ndobro de n == " << n + n
		<< "\nn ao quadrado == " << n * n
		<< "\nmetade de n == " << n / 2
		<< "\nraiz quadrada de n == " << sqrt(n)
		<< endl;	// outro nome para nova linha ("end of line") na saída
	*/


	/*
	// lê primeiro e segundo nome
	string primeiro;
	string segundo;

	cout << "Por favor, informe seu primeiro e segudo nomes\n";
	cin >> primeiro >> segundo;					// le dois strings

	if (primeiro == segundo)
		cout << "insto eh o mesmo nome duplicado \n";
	if (primeiro < segundo)
		cout << primeiro << "esta alfabeticamente antes de " << segundo << "\n";
	if (primeiro > segundo)
		cout << primeiro << "esta alfabeticamente depois de " << segundo << "\n";


	string nome = primeiro + " " + segundo;		// concatena strings
	cout << "Oi, " << nome << "\n";
	*/


	/*
	// pequeno programa que detecta palavras adjacentes repetidas em uma sequencia de palavras. (1° versão)
	string anterior = " ";	// palavra anterior; inicializada com uma "não palavra"
	string atual;			// palavra atual

	while (cin >> atual)
	{	// le uma sequencia de palavras 
		if (anterior == atual) // confere se a palavra é a mesma que a anterior
			cout << "palavra repetida: " << atual << "\n";
		anterior = atual;
	}
	*/


	// pequeno programa que detecta palavras adjacentes repetidas em uma sequencia de palavras. (2° versão)
	int num_de_palavras = 0;
	string anterior = " ";		// não é uma palavra
	string atual;

	while (cin >> atual)
	{
		++num_de_palavras;		// incrementa o contador de palavras

		if (anterior == atual)
		{
			cout << "Numero de palavras " << num_de_palavras << "\n"
				<< "repetidas: " << atual << "\n";
		}
		anterior = atual;
	}








	return 0;
}