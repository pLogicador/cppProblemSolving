#include <iostream>
/*
using std::cout;
using std::cin;
using std::endl;

/*
// Imprimindo o endereço armazenado em uma variável char *
 int main()
  {
    char *word = "again";

    // exibe o valor de char * e, então, o valor de char *
    // static_cast para void *
    cout << "Value of word is: " << word << endl << "Value of static_cast< void * >( word ) is: " << static_cast< void * >( word ) << endl;
    return 0;
}
*/


/*
// utilizando funções-membro get, put e eof.
int main()
{
    int character; // utiliza int, porque char não pode representar EOF

    // solicitação de linha de texto
    cout << "Before input, cin.eof() is " << cin.eof() << endl << "Enter a sentencce followed by end-of-file: " << endl;

    // utiliza get para ler cada caractere & utiliza put para exibi-los;
    while((character = cin.get() ) != EOF )
        cout.put( character );

    //exibe caracter de fim do arquivo
    cout << "\nEOF in this system is: " << character << endl;
    cout << "After input of EOF, cin.eof() is" << cin.eof() << endl;

    return 0;
}
*/


/*
// Contrastando a entrada de uma string via cin e cin.get
int main()
{
    const int SIZE = 80;
    char buffer1[ SIZE ];
    char buffer2[ SIZE ];

    cout << "Enter a sentence:" << endl;
    cin >> buffer1;

    cout << "\nThe string read with cin was: " << endl << buffer1 << endl << endl;

    // usa cin.get para inserir caracteres em buffer2
    cin.get( buffer2,SIZE );

    // exibe o conteúdo de buffer2
    cout << "The string read with cin.get was: " << endl << buffer2 << endl;

    return 0;
}
*/


/*
// Inserindo caracteres utilizando a função-mebro cin getline
int main()
{
    const int SIZE = 80;
    char buffer[ SIZE ];

    // Insere caracteres no buffer via função cin getline
    cout << "Enter a sentence: " << endl;
    cin.getline( buffer,SIZE );

    // exibição do conteúdo do buffer
    cout << "\nThe setence entered is: " << endl << buffer << endl;

    return 0;
}
*/


/*
// E/S não formatada utilizando read, gcount e write
int main()
{
    const int SIZE = 80;
    char buffer[SIZE]; // cria array de 80 caracteres

    // utiliza função read para inserir caracteres no buffer

    cout << "Enter a sentence: " << endl;
    cin.read( buffer, 20 );

    // utiliza funções write e gcount para exibir caracteres de buffer
    cout << endl << "The sentence entered was: " << endl;
    cout.write( buffer, cin.gcount() );
    cout << endl;

    return 0;
}
*/

// Criando e testando manipuladores de fluxo não parametrtizados
// definidos pelo usuário

using std::cout;
using std::flush;
using std::ostream;

// Definição dos manipuladores bell, caarriageReturn, tab
ostream& bell( ostream& output )
{
    return output << '\a'; // emite bip de sistema
}

ostream& carriageReturn( ostream& output )
{
    return output << '\r'; // emite retorno de carro
}

ostream& tab( ostream& output )
{
    return output << '\t'; // emite tab
}

// manipulador endLine
ostream& endLine( ostream& output )
{
    return output << '\n' << flush; // emite fim de linha do tipo endl
}


int main()
{
    cout << "Testing the tab manipulator: " << endLine << 'a' << tab << 'b' << tab << 'c' << endLine;

    cout << endLine <<"Testing the carriageReturn and bell manipulators: " << endLine << ".............";

    cout << bell;

    cout << carriageReturn << "--------" << endLine;

    return 0;
}







