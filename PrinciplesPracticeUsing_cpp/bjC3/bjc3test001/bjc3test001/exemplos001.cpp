#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }


int main()
{
	/*
	string s = "Adeus, mundo cruel!";
	cout << s << '\n';
	*/

	// conversões inseguras
	/*
	int a = 20000;

	char c = a;
	int b = c;

	if (a != b)
		cout << "oops!: " << a << "!=" << b << '\n';
	else
		cout << "Uau! Temos caracteres grandes\n";
	*/

	double d = 0;

	while (cin >> d)	// repete os comandos abaixo; enquanto digitamos números
	{
		int i = d;		// tenta espremer um double em um int
		char c = i;		// tenta espremer um int em um char
		int i2 = c;		// obtém o valor inteiro do caractere

		cout << "d==" << d << '\n'		// o double original
			<< "i==" << i << '\n'		// convertido para int
			<< "i2==" << i2 << '\n'		// valor int do char
			<< "char(" << c << ")\n";	// o char






	}






	return 0;
}