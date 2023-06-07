// 5.10
#include <iostream>
#include "GradeBook.h"
using std::cout;
using std::cin;
using std::endl;

// construtor inicializa courseName com string fornecido como argumentto;
// inicializa membro de dados de contador como 0
GradeBook::GradeBook( string name )
{
    setCourseName( name );
    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;
}

void GradeBook::setCourseName( string name )
{
    if( name.length() <= 25 ) // se o nome tiver 25 ou menos caracteres
        courseName = name;    // armazena o nome do curso no objeto
    else
    {   // configura courseName como os primeiros 25 caracteres do nome de parâmetro
        courseName = name.substr( 0, 25 );
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
        << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

string GradeBook::getCourseName( )
{
    return courseName;
}



void GradeBook::displayMessage()
{
    // essa instrução chama getCourseName para obter o nome do curso que esse GradeBook representa
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
}

void GradeBook::inputGrades()
{
    int grade; // nota inserida pelo usuário


    cout << "Enter the letter grades." << endl
        << "Enter the EOF character to end input." << endl;

    // faz loop até usuário digitar a seqüência de teclas de fim do arquivo
    while (( grade = cin.get() )!= EOF)
    {   // determina que nota foi inserida
        switch ( grade )
        {
            case 'A':        // a nota era letra 'A' maiúscula ou 'a' minúcula
            case 'a':
                aCount++;    // incrementa aCount
                break;       // fecha switch
            case 'B':
            case 'b':
                bCount++;
                break;
            case 'C':
            case 'c':
                cCount++;
                break;
            case 'D':
            case 'd':
                dCount++;
                break;
            case 'F':
            case 'f':
                fCount++;
                break;
            case '\n':      // ignora nova linha, tabulações e espaços em entrada
            case '\t':
            case ' ':
                break;       // fecha o switch

            default:        // captura todos os outros caracteres
                cout << "Incorrect letter grade entered."
                << "Enter a new grade." << endl;
                break;     // opcional; sairá de switch de qualquer jeito
        } // fim switch
    }     // fim while
}         // fim função inputGrades

// exibe um relatório baseado nas notas inseridas pelo usuário
void GradeBook::displayGradeReport()
{
    // gera a saída de resumo de resultados
    cout << "\n\nNumber of students who received each letter grade:"
    << "\nA: " << aCount    // exibe número de notas A
    << "\nB: " << bCount    // exibe número de notas B
    << "\nC: " << cCount    // exibe número de notas C
    << "\nD: " << dCount    // exibe número de notas D
    << "\nF: " << fCount    // exibe número de notas F
    << endl;
}




int main()
{
    GradeBook myGradeBook( "CS101 C++ Programming" );

    myGradeBook.displayMessage();     // exibe mensagem de boas-vindas
    myGradeBook.inputGrades();        // lê notas
    myGradeBook.displayGradeReport(); // exibe relatório baseado em notas

    return 0;
}
