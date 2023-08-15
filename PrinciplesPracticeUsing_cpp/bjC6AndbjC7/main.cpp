/*


    Neste projeto pessoal, desenvolvi uma calculadora simples em C++ capaz de realizar operações de aritmética básica em
    expressões fornecidas pelo usuário. A ideia é criar um programa que funcione como uma calculadora de bolso,
    permitindo que o usuário insira expressões matemáticas e obtenha o resultado da avaliação.

    Descrição do projeto:

    O programa foi projetado para lidar com expressões matemáticas em várias linhas, ou seja, não é necessário que a
    expressão esteja em uma única linha. Isso proporciona mais flexibilidade ao usuário na hora de digitar as operações.

    Para permitir a entrada de expressões em várias linhas, o programa utiliza tokens para reconhecer constantes de
    ponto flutuante, operadores e parênteses. Os três tipos de tokens são tratados individualmente durante o
    processo de análise da expressão.

    Para lidar com a ordem de avaliação correta, o programa utiliza um algoritmo que segue as regras da precedência de
    operadores. Assim, multiplicações e divisões têm prioridade sobre adições e subtrações. Além disso,
    parênteses são usados para alterar a precedência das operações, permitindo que o usuário
    especifique a ordem desejada de avaliação.

    Durante o processo de análise, o programa se lembra da posição de cada operador * e / encontrados na expressão para
    garantir que eles sejam avaliados corretamente no contexto da precedência de operadores.

    Exemplo de uso:

    Vamos supor que o usuário digite a seguinte expressão em várias linhas:

    2
    +
    3.1
    *
    4
    O programa irá reconhecer os tokens (constantes, operadores e parênteses) e, em seguida, realizará a avaliação da expressão,
    fornecendo o resultado:

    Resultado: 14.4

    Isso demonstra a capacidade do programa de lidar com expressões em várias linhas e realizar corretamente a avaliação de
    acordo com a precedência dos operadores.

    O projeto da calculadora simples em C++ é uma solução prática para realizar cálculos rápidos e facilitar o trabalho com
    operações matemáticas. Com ele, é possível obter resultados precisos e agilizar tarefas que envolvem aritmética simples.



    Calculadora simples
     Histórico de revisões:
         Revisado por Bjarne Stroustrup em maio 2007
         Revisado por Bjarne Stroustrup em agosto 2006
         Revisado por Bjarne Stroustrup em agosto 2004
         Originalmente escrito por Bjarne Stroustrup
         (bs@cs.tamu.edu) 1º Semestre 2004.

        Este programa implementa uma calculadora de expressões básicas.
     Entrada de cin; saída em cout.
     A gramática de entrada é:
     Comando:
         Expressão
         Imprimir
         Fim
     Imprimir:
        ;
     Fim:
        f
     Expressão:
         Termo
         Expressão + Termo
         Expressão – Termo
     Termo:
         Primário
         Termo * Primário
         Termo / Primário
         Termo % Primário
     Primário:
         Número
         (Expressão)
     – Primário
     + Primário
     Número:
        constante em ponto flutuante


     Entrada vem de cin por meio de um Token_stream denominado ts.

*/


#include <iostream>
#include <vector>
#include <string>
#include <cmath> // Adicionei essa biblioteca para utilizar a função 'pow'
#include "std_lib_facilities.h" // Caso utilize bibliotecas adicionais, você pode incluí-las aqui
using namespace std;



// Informações sobre a obra
const string nomeAutor = "Pedro Miranda";
const string dataDesenvolvimento = "20/07/2023";
const string descricao = "Calculadora Simples em C++";





// Constante simbólica para representar um número
const char num = '8';           // t.tipo==num significa que t é um Token de número
const char fim = 'f';           // t.tipo==fim significa um Token de fim
const char imprimir = ';';      // t.tipo==imprimir significa que é um Token de imprimir
const string prompt = "> ";
const string result = "= ";     // usado para indicar que vem um resultado a seguir
const char nome = 'a';          // token de nome
const char let = 'L';           // token de declaração
const string declkey = "let";   // palavra-chave de declaração








class Token
{
public:
    char tipo;      // Tipo do Token: pode ser um operador, número ou outro caractere.
    double valor;   // Valor associado ao Token (somente para números).
    string nome;

    // Construtor para criar um Token com tipo e valor padrão (usado para caracteres simples).
    Token(char ch ) : tipo(ch), valor(0){}

    // Construtor para criar um Token com um caractere e um valor (usado para números).
    Token(char ch, double val) : tipo(ch), valor(val){}


    Token(char ch, string n) : tipo(ch), nome(n) {}
};


class Token_stream
{
public:
    Token_stream();             // cria um Token_stream que lê a partir de cin
    Token get();                // obtém um Token (get() está definida em §6.8.2)
    void putback( Token t );    // coloca um Token de volta
    void ignore(char c);        // descarta caracteres até um c, inclusive

private:
    // detalhes de implementação
    bool cheio;                 // existe um Token no buffer?
    Token buffer;               // é aqui que mantemos um Token devolvido usando putback()

};


Token_stream::Token_stream() : cheio(false), buffer(0){}    // nenhum Token no buffer


void Token_stream::putback( Token t )
{
    if (cheio)
    {
        throw runtime_error("putback() em um buffer cheio");
    }

    buffer = t;     // copia t para buffer
    cheio = true;   // buffer agora está cheio
}


void Token_stream::ignore(char c) // c representa o tipo de Token
{
    // primeiro olha o buffer:
    if (cheio && c == buffer.tipo)
    {
        cheio = false;
        return;
    }

    cheio = false;

    // agora pesquisa nos dados de entrada:
    char ch = 0;
    while (cin >> ch)
    {
        if (ch == c)
            return;
    }

}

Token Token_stream::get()
{
    if (cheio)      // já temos um Token pronto?
    {
        // remove Token do buffer
        cheio = false;
        return buffer;
    }

    char ch;
    cin >> ch;      // note que >> ignora espaços em branco (espaço, nova linha, tabulação, etc.)


    switch (ch)
    {
    case fim:
    case imprimir:
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
        return Token(ch);           // deixa cada caractere representar a si próprio

    case '.' :  // uma constante em ponto flutuante pode iniciar por ponto
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':       // constante numérica
    {
        cin.putback(ch);        // coloca o dígito de volta no fluxo de entrada

        double val;
        cin >> val;             // lê um número em ponto flutuante


        return Token(num, val); // faz 'num' representar "um número"
    }

    default:
        if (isalpha(ch))    // ch é uma letra?
        {
            string s;
            s += ch;

            while ( cin.get(ch) && ( isalpha(ch) || isdigit(ch)) )
            {
                s += ch;
            }

            cin.putback(ch);

            if (s == declkey)
            {
                return Token(let);
            }

            return Token(nome, s);
        }

        throw runtime_error("Token invalido");

    }
}


Token_stream ts;        // um Token_stream denominado ts


class Variavel
{
public:
    string nome;
    double valor;
    Variavel(string n, double v) : nome(n), valor(v) {}
};


vector<Variavel> var_tabela;



bool ja_declarada(string var)
{   // var já está em var_tabela?
    for (int i = 0; i < var_tabela.size(); ++i)
    {
        if (var_tabela[i].nome == var)
        {
            return true;
        }
    }

    return false;

}

double define_nome(string var, double valor)
{   // insere (var,valor) em var_tabela
    if (ja_declarada(var))
    {
        throw runtime_error("Variavel declarada duas vezes: " + var);
    }

    var_tabela.push_back(Variavel(var, valor));
    return valor;
}




double get_valor(string s)
{    // devolve o valor da Variavel denominada s
    for (int i = 0; i < var_tabela.size(); ++i)
    {
        if (var_tabela[i].nome == s)
        {
            return var_tabela[i].valor;
        }
    }
    throw runtime_error("Variavel indefinida: " + s);
}


void set_valor(string s, double d)
{   // coloca o valor d na Variavel denominada s
    for (int i = 0; i < var_tabela.size(); ++i)
    {
        if (var_tabela[i].nome == s)
        {
            var_tabela[i].valor = d;
            return;
        }
    }
    throw runtime_error("Variavel indefinida: " + s);

}



double expressao();


double declaracao()
{   // supõe que encontramos "let"
    // trata: nome = expressão
    // declara uma variável denominada "nome" com o valor inicial "expressão"
    Token t = ts.get();

    if (t.tipo != nome)
    {
        throw runtime_error("Nome esperado na declaracao");
    }

    string var_nome = t.nome;


    Token t2 = ts.get();

    if (t2.tipo != '=')
    {
        throw runtime_error("= faltando na declaracao de " + var_nome);
    }

    double d = expressao();
    define_nome(var_nome, d);
    return d;
}



double primario()
{
    Token t = ts.get();

    switch (t.tipo)
    {
    case '(':       // trata '(' expressão ')'
    {
        double d = expressao();
        t = ts.get();

        if (t.tipo != ')')
        {
            throw runtime_error("')' esperado");

        }
        return d;
    }

    case num:
        return t.valor;     // devolve o valor do número
    case '-':
        return - primario();
    case '+':
        return + primario();
    default:
        throw runtime_error("Esperado um primario");
    }
}

double termo()
{
    double left = primario();
    Token t = ts.get();


    while (true)
    {
        switch (t.tipo)
        {
        case '*':
            left *= primario();
            t = ts.get();
            break;

        case '/':
        {
            double d = primario();

            if (d == 0)
            {
                throw runtime_error("Divisao por zero");
            }

            left /= d;
            t = ts.get();
            break;
        }

        case '%':
            {
                int i1 = narrow_cast<int>(left);
                int i2 = narrow_cast<int>(primario());

                if (i2 == 0)
                {
                    throw runtime_error("%: divisao por zero");
                }

                left = i1 % i2;
                t = ts.get();
                break;

            }

        default:
            ts.putback(t);      // coloca de t de volta no Token_stream
            return left;

        }
    }
}


double expressao()
{
    double left = termo();      // lê e avalia um Termo
    Token t = ts.get();         // obtém o próximo Token do Token_stream

    while (true)
    {
        switch (t.tipo)
        {
        case '+':
            left += termo();
            t = ts.get();
            break;
        case '-':
            left -= termo();
            ts.get();
            break;
        default:
            ts.putback(t);  // coloca t de volta no Token_stream
            return left;    // finalmente: nenhum outro + ou –; devolve a resposta
        }
    }
}


double declaracao();


double comando()
{
    Token t = ts.get();

    switch (t.tipo)
    {
    case let:
        return declaracao();

    default:
        ts.putback(t);
        return expressao();
    }
}





void clean_up_mess()    // ingênua
{
    ts.ignore(imprimir);
}



void calcular()
{
    while(cin)
    {
        try
        {
            cout << prompt;
            Token t = ts.get();

            while (t.tipo == imprimir)  // Ignora os tokens de impressão
            {
                t = ts.get();           // Descarta os tokens de impressão para evitar sua exibição
            }

            if (t.tipo == fim)
            {
                return;
            }

            ts.putback(t);              // Coloca o último Token de volta no Token_stream
            cout << result << comando() << endl;

        }

        catch (const exception& e)
        {
            cerr << e.what() << endl;   // escrever mensagem de erro
            clean_up_mess();
        }
    }
}




int main()
{

    cout << "Obra: " << descricao << endl;
    cout << "Desenvolvido por: " << nomeAutor << endl;
    cout << "Data de desenvolvimento: " << dataDesenvolvimento << "\n\n" << endl;



    cout << "Bem-vindo a nossa calculadora simples. Por favor, forneca uma \nexpressao usando numeros em ponto flutuante."
        << "\nUtilize o sinal ';' ao final da expressao para que possa ser avaliada!"
        << "\nUtilize o sinal 'f' para encerrar o programa!" << endl;



    try
    {
        // predefine nomes:
        define_nome("pi", 3.1415926535);
        define_nome("e", 2.7182818284);


        calcular();
        keep_window_open();     // lida com o modo console do Windows

        return 0;
    }

    catch (runtime_error& e)
    {
        cerr << "Erro: " << e.what() << endl;

        keep_window_open("~~");
        return 1;

    }

    catch (...)
    {
        cerr << "excecao desconhecida \n";

        keep_window_open("~~");
        return 2;
    }



    return 0;
}
