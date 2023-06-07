// GradeBook.cpp


#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed; // assegura que o ponto de fra��o decimal seja exibido

#include <iomanip>  // manipuladores de fluxo parametrizados
using std::setprecision; // configura a precis�o da sa�da num�rica

#include "GradeBook.h"

GradeBook::GradeBook( string name )
{
    setCourseName( name );
}

void GradeBook::setCourseName( string name )
{
    if( name.length() <= 25 )
        courseName = name;
    else
    {
        courseName = name.substr( 0, 25 ); // seleciona os primeiros 25 caracteres
        cout << "Name \"" << name << "\" exceeds maximum length (25). \n" << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

string GradeBook::getCourseName()
{
    return courseName;
}


void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
}

void GradeBook::determineClassAverage()
{
    int total;
    int gradeCounter;
    int grade;
    double average;

    total = 0;
    gradeCounter = 0;

    // fase de processamento
    cout << "Enter grade or -1 to quit: ";
    cin >> grade;

    while( grade != -1 )
    {
        total += grade;
        gradeCounter += 1;

        cout << "Enter grade or -1 to quit: ";
        cin >> grade; // insere nota ou valor de sentinela
    }
    // fase de t�rmino
    if( gradeCounter != 0 ) // se usu�rio inseriu pelo menos uma nota...
    {
        average = static_cast< double >(total) / gradeCounter; // calcula a m�dia de tds as notas inseridas; convertendo int em float

        // exibe o total e a m�dia (com dois d�gitos de precis�o)
        cout << "\nTotal of all " << gradeCounter << " grade entered is " << total << endl;
        cout << "Class average is " << setprecision( 2 ) << fixed << average << endl;
    }
    else // sen�o for inserido nenhuma nota
        cout << "No grades were entered" << endl;
}
