// Operadores l�gicos.
#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha; // faz com que valores bool sejam impressos como �true� ou �false�

int main()
{

    // cria a tabela-verdade para o operador && (E l�gico)
    cout << boolalpha << "Logical AND (&&)"
        << "\nfalse && false: " << ( false && false )
        << "\nfalse && true: " << ( false && true )
        << "\ntrue && false: " << ( true && false )
        << "\ntrue && true: " << ( true && true ) << "\n\n";


    // cria a tabela-verdade para o operador || (OU l�gico)
    cout << �Logical OR (||)�
        << "\nfalse || false: " << ( false || false )
        << "\nfalse || true: " << ( false || true )
        << "\ntrue || false: " << ( true || false )
        << "\ntrue || true: " << ( true || true ) << "\n\n";


    // cria a tabela-verdade para o operador ! (nega��o l�gica)
    cout << "Logical NOT (!)"
        << "\n!false: " << ( !false )
        << "\n!true: " << ( !true ) << endl;
    return 0; // indica termina��o bem-sucedida
}
