#include <iostream>
using namespace std;

int main()
{
    char string1[20]; // Reserva espa�o para 20 caracteres
    char string2[] = "string literal"; // Reserva espa�o para 15 caracteres

    // L� a string fornecida pelo usu�rio para o array string1
    cout << "Enter the string \"hello there\": ";
    cin >> string1; // L� "hello" [o espa�o termina a entrada]

    // Imprime as strings
    cout << "string1 is: " << string1 << "\nstring2 is: " << string2;

    cout << "\nstring1 with spaces between characters is:\n";

    // Imprime caracteres at� encontrar o caractere nulo '\0'
    for (int i = 0; string1[i] != '\0'; i++)
        cout << string1[i] << ' ';

    cin >> string1; // L� "there"
    cout << "\nstring1 is: " << string1 << endl;

    return 0; // Indica termina��o bem-sucedida
}
