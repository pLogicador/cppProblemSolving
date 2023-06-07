// Versão modificada do GradeBook

#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"


int main()
{
    // cria dois objetos GradeBook
    // nome inicial de curso gradeBook é mt longo
    GradeBook gradeBook1 ( "CS101 Introduction to Programming in C++" );
    GradeBook gradeBook2 ( "CS102 C++ Data Structures" );

    // exibe courseName de cada GradeBook
    cout << "gradeBook1's initial course name is: " << gradeBook1.getCourseName()
    << "\ngradeBook2's initial course name is: " << gradeBook2.getCourseName() << endl;

    // moddifica courseName do myGradeBook (com uma string de comprimento váalido)
    gradeBook1.setCourseName( "CS101 C++ Programming" );

    // exibe course name de cada GradeBook
    cout << "\ngradeBook1's course name is: " << gradeBook1.getCourseName()
    << "\ngradeBook2's course name is: " << gradeBook2.getCourseName() << endl;

    return 0;
}
