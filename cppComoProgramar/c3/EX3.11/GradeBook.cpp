/*Modificando a classe GradeBook

  --GradeBook.cpp--

*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h"

// o construtor
GradeBook::GradeBook( string name, string instructorName )
{
    setCourseName( name );
    setCourseInstructorName( instructorName );
}

void GradeBook::setCourseName( string name )
{
    courseName = name; // armazena o nome do curso no objeto
}

string GradeBook::getCourseName()
{
    return courseName; // retorna o courseName do objeto
}

// para o instrutor do curso
void GradeBook::setCourseInstructorName( string name )
{
    courseInstructorName = name;
}

string GradeBook::getCourseInstructorName()
{
    return courseInstructorName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    cout << "\nThis course is presented by: " << getCourseInstructorName() << "!" << endl;
};

