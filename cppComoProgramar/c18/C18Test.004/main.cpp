
// Demonstrando função-membro relacionado ao tamanho e à capacidade.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;

#include <string>
using std::string;

void printStatistics( const string & );

// exibe a estatística de string
void printStatistics( const string &stringRef )
{
    cout << "capacity: " << stringRef.capacity() << "\nmax size: " << stringRef.max_size()
    << "\nsize: " << stringRef.size() << "\nlength: " << stringRef.length() << "\nempty: " << stringRef.empty();
} // fim printStatistcs


int main()
{
    string define1;

    cout << "\nStatistics before input:\n" << boolalpha;
    printStatistics( define1 );


    // lê somente "tomato" de "tomato soup"
    cout << "\n\nEnter a string: ";
    cin >> define1; // delimitado por espaço em branco

    cout << "The string entered was: " << define1;

    cout << "\nStatistcs after input:\n";
    printStatistics( define1 );

    // lê somente "soup"
    cin >> define1; // delimitado por espaço em branco
    cout << "\n\nThe remaining string is: " << define1 << endl;
    printStatistics( define1 );


    // acrecenta 46 caracteres a define1
    define1 += "1234567890abcdefghijklmnoprstuvwyz1234567890";
    cout << "\n\ndefine1 is now: " << define1 << endl;
    printStatistics( define1 );

    // adiciona 10 elementos a define1
    define1.resize( define1.length() + 10 );

    cout << "\n\nStats after resizing by ( length + 10 ):\n";
    printStatistics( define1 );

    cout << endl;

    return 0;
}
