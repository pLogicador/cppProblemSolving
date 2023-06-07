// GradeBook.cpp


#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed; // assegura que o ponto de fração decimal seja exibido

#include <iomanip>  // manipuladores de fluxo parametrizados
using std::setprecision; // configura a precisão da saída numérica

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
    // fase de término
    if( gradeCounter != 0 ) // se usuário inseriu pelo menos uma nota...
    {
        average = static_cast< double >(total) / gradeCounter; // calcula a média de tds as notas inseridas; convertendo int em float

        // exibe o total e a média (com dois dígitos de precisão)
        cout << "\nTotal of all " << gradeCounter << " grade entered is " << total << endl;
        cout << "Class average is " << setprecision( 2 ) << fixed << average << endl;
    }
    else // senão for inserido nenhuma nota
        cout << "No grades were entered" << endl;
}
