/*Implementações das definições de função-membro do GradeBook.
  A função setCourseName realiza a validação
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "GradeBook.h"


GradeBook::GradeBook( string name )
{
    setCourseName( name );
}



void GradeBook::setCourseName( string name )
{
    if ( name.length() <= 25 ) // se o nome tiver 25 ou menos caracteres
        courseName = name;     // armazena o nome do curso no objeto

    if (name.length() > 25 ) // se o nome tiver mais de 25 carcacteres
    {
        // configura courseName como os primeiros 25 caracteres do paramêtro name
        courseName = name.substr( 0, 25 ); // inicia em 0, comprimento de 25

        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
        << "Limiting courseName to first 25 characters.\n" << endl;
    } // fim if
} // fim da função setCourseName

// função para obter o nome do curso
string GradeBook::getCourseName()
{
    return courseName;
}

// exibe a mensagem de boas-vindas
void GradeBook::displayMessage()
{
    // chama getCourseName para obter o courseName
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}
