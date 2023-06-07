/* Modificando a classe GradeBook

  --GradeBook.h--
*/

#include <string>
using std::string;

// defini��o da classe GradeBook
class GradeBook
{
public:
    GradeBook( string, string ); // construtor que inicaliza courseName e instructorName

    void setCourseInstructorName( string ); // fun��o que configura o nome do instrutor do curso
    string getCourseInstructorName(); // fun��o que obt�m o nome do instrutor do curso

    void displayMessage(); // fun��o que exibe um mensagem de boas-vindas

    void setCourseName( string ); // fun��o que configura o nome do curso
    string getCourseName(); // fun��o que obt�m o nome do curso
private:
    string courseName; // nome do curso para esse GradeBook

    string courseInstructorName; // nome do instrutor do curso
}; // fim classe

