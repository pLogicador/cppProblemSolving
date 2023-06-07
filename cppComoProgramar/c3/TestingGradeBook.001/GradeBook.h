#include <string>
using std::string;

// definição da classe GradeBook
class GradeBook
{
public:
    GradeBook( string ); // construtor que inicaliza courseName
    void setCourseName( string ); // função que configura o nome do curso
    string getCourseName(); // função que obtém o nome do curso
    void displayMessage(); // função que exibe um mensagem de boas-vindas
private:
    string courseName; // nome do curso para esse GradeBook
}; // fim classe
