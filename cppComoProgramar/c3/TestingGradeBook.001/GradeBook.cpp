/*
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h"

// o construtor inicializa courseName com a string fornecida com o argumento
GradeBook::GradeBook( string name )
{
    setCourseName( name ); // chama a função set para inicializar courseName
} // fim ctor

// função para configurar o nome ddo curso
void GradeBook::setCourseName( string name )
{
    courseName = name; // armazena o nome do curso no objeto
}

string GradeBook::getCourseName()
{
    return courseName; // retorna o courseName do objeto
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
};
