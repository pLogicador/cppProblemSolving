/* Defini��o de classe GradeBook em um arquivo main separado
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

class GradeBook
{
public:
    // construtor inicializa courseName
    GradeBook( string name )
    {
        setCourseName( name ); // chama a fun��o set para inicializar courseName
    }

    void setCourseName( string name )
    {
        courseName = name; // armazena o nome do curso no objeto
    }

    // fun��o para obter o nome do curso
    string getCourseName()
    {
        return courseName; // retorna courseName do objeto
    }

    // funn��o para exibir a mensagem
    void displayMessage()
    {
        cout << "Welcome to the grade book for\n" << getCourseName()
        << "!" << endl;
    }
private:
    string courseName; // nome do curso para esse GradeBook
};// fim classe
