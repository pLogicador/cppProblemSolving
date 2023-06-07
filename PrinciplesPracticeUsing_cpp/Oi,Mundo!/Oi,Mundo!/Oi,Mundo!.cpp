#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }


int main() // O programa cpp inicia executando a função main
{
	cout << "Oi,Mundo!\n\n" << endl; // escrve "Oi, Mundo!" na saída
	cout << "Aqui vamos nos!\n\n" << endl;

	// Instruções para ir da sala de jantar até o banheiro
	cout << "Saia da sala de jantar e ande para o corredor;\n" << "Agora, siga em direcao a porta do banheiro;\n" 
		<< "Abra a porta do banheiro e entre;\n" << "Em seguida, feche a porta do banheiro.\n\n\n" << endl;

	// Descrição de como ir da porta da frente do meu dormitório até a porta de minha sala de aula
	cout << "Siga da porta do meu dormitorio para a sala de estar\n" 
		<< "Em seguida, siga em direcao ao corredor estreito abaixo da escada\n" 
		<< "Siga em direcao ao quarto de estudo\n" << "Sente-se na cadeira e estude.\n\n\n" << endl;

	// Instruções para receita de bolinho de mirtilo
	// cada ação individual deve ficar em um parágrafo enumerado
	/* liste ingredientes, utensílios de cozinha utilizados em cada passo, 
	temperatura do forno, pré-aquecedor, preparação da forma, tempo, necessidade de proteção ao retirar os bolinhos.
	*/
	cout << "****Ingredientes****\n"
		<< "	1 e 1/2 xicaras de farinha de trigo\n"
		<< "	3/4 xicaras de acucar demerara\n" 
		<< "	1 pitada de sal\n"
		<< "	2 colheres de cha de fermento em po\n"
		<< "	1/3 xicaras de oleo vegetal\n" 
		<< "	1/2 xicara de leite integral\n" 
		<< "	1 ovo grande\n"
		<< "	1 colher de sopa extrato de baunilha\n"
		<< "	1 xecara de mirtilos frescos\n\n" 
		<< "****Modo-de-Preparo****\n" 
		<< "	1. Pre-aqueça o forno a 180 graus.\n" 
		<< "	2. Pegue uma assadeira para cupcakes,\n "
		<< "	3. coloque as forminhas ou unte e enfarinhe 8 cavidades.\n"
		<< "	4. Pegue uma tigela grande,\n " 
		<< "	5. misture nessa tigela os ingredientes secos(farinha, acucar, sal, fermento) e reserve.\n"
		<< "	6. Pegue outra tigela,\n" 
		<< "	7. misture o leite, ovo, oleo e o extrato de baunilha\n"
		<< "	8. Junte a mistura liquida aos secos e mexa sem bater a massa.Quanto mais você bate, mais duro fica o bolinho.\n"
		<< "	9. Acrescente os mirtilos e mexa delicadamente, pra que eles não estourem antes de assar.\n"
		<< "	10. Coloque 2 colheres de sopa em cada forminha, preenchendo uns 2 / 3 de cada.\n" 
		<< "	11. Pulverize um pouco de acucar por cima, pra criar uma casquinha de leve.\n"
		<< "	12. Leve ao forno e asse por 20 a 25 minutos, ou ate que fiquem dourados e assados." << endl;


	keep_window_open(); // aguarda a entrada de um caractere
	return 0;
}
