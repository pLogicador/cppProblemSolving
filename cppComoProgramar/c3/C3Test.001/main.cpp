/* Instanciando m�ltiplos objetos da classe GradeBook e
utilizando o costrutor GradeBook para especificar o nome do curso
quando cada objeto GradeBook � criado.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // para o programa utilizar a classe de string padr�o C++
using std::string;

class GradeBook
{
public:
    // O construtor inicializa coursename com a string fornecida como argumento
    GradeBook( string name )
    {
        setCourseName( name ); // chama a fun��o set para inicializar courseName
    }// fim do construtor GradeBook

    // fun��o para configurar o nome do curso
    void setCourseName( string name )
    {
        courseName = name; // armazena o nome do curso no objeto
    }// fim fa fun��o setCourseName

    // fun��o para obter o nome do curso
    string getCourseName()
    {
        return courseName; // retorna courseName do objeto
    } // fim da fun��o getCourseName

    // fun��o para exibir uma mensagem de boas-vindas para o usu�rio GradeBook
    void sisplayMessage()
    {
        // chama getCourseName para obter o courseName
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    }// fim da fun��o displayMessage
private:
    string courseName; // nome do curso para esse GradeBook

}; // fim da classe GradeBook


// inicio main
int main()
{
    // cria dois objetos GradeBook
    GradeBook gradeBook1( "CS101 Introduction to C++ Programing" );
    GradeBook gradeBook2( "CS102 Data Structures in C++" );

    // exibe o valor inicial de courseName para GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
    << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;

    return 0; // finaliza��o bem-sucedida
}// fim main

