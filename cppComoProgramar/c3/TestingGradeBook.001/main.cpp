// Figura 3.13: fig03_13.cpp
// Demonstra��o de classe GradeBook depois de separar
// sua interface de sua implementa��o.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a defini��o de classe GradeBook

  // a fun��o main inicia a execu��o do programa
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
} // fim de main
