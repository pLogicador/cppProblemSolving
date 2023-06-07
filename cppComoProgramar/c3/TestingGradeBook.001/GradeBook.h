#include <string>
using std::string;

// defini��o da classe GradeBook
class GradeBook
{
public:
    GradeBook( string ); // construtor que inicaliza courseName
    void setCourseName( string ); // fun��o que configura o nome do curso
    string getCourseName(); // fun��o que obt�m o nome do curso
    void displayMessage(); // fun��o que exibe um mensagem de boas-vindas
private:
    string courseName; // nome do curso para esse GradeBook
}; // fim classe
