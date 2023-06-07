/* Modificando a classe GradeBook
*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;


#include "GradeBook.h"

int main()
{

    GradeBook instructorName1( "", "Matheus Oliveira" );
    GradeBook gradeBook1("CS101 Introduction to C++ Programming","");

    cout << "\nInstructor name of course: " << instructorName1.getCourseInstructorName()
    << "\n\ngradeBook1: " << gradeBook1.getCourseName()
    << endl;

    return 0;
}
