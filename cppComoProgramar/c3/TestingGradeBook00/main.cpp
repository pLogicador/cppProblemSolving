/*Incluindo a classe GradeBook a partir do arquivo Gradebook.h para uso em main.
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h" // inclui a defini��o de classe GradeBook

// inicia execu��o
int main()
{
    // cria dois objetos GradeBook
    GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
    GradeBook gradeBook2( "CS102 Data Structures in C++" );

    // exibe valor inicial de courseName para cada GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
    << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
    << endl;

  return 0; // indica termina��o bem-sucedida
}
